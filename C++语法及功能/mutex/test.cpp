#include <iostream>       // std::cout
#include <thread>         // std::thread
#include <mutex>          // std::mutex

std::mutex mtx;           // mutex for critical section

void print_block (int n, char c) {
  // critical section (exclusive access to std::cout signaled by locking mtx):
  //mtx.lock();
  for (int i=0; i<n; ++i) { std::cout << c; }
  std::cout << '\n';
  //mtx.unlock();
}
//每个线程在对资源操作前都尝试先加锁，成功加锁才能操作，操作结束解锁。
//但通过“锁”就将资源的访问变成互斥操作，而后与时间有关的错误也不会再产生了。
//意思就是将资源加锁只能在这个线程中使用，别的线程无法访问该资源

int main ()
{
  std::thread th1 (print_block,50,'*');
  std::thread th2 (print_block,50,'$');

  th1.join();
  th2.join();

  return 0;
}