/*
设计一个主线程和子线程交替访问一个int类型的全局变量，主线程负责写入变量的内容，写入成功时，把状态置为DONE，子线程负责判断该变量的状态为DONE时，
读取该变量内容并写入文件ts.txt中，并将状态置为EMPTY并通知主线程继续写入.
要求:主线程在操作写入时，子线程无法操作该变量，同样的，子线程在读取该变量的值并写入文件时，主线程也无法操作该变量.
最终输出ts.txt的文本内容为1 2 3 4 5 6 7 8  
*/



#include<bits/stdc++.h>
using namespace std;

 void t1()  //普通的函数，用来执行线程
  {
      for (int i = 0; i < 20; ++i)
      {
          cout << "t1111\n";
     }
 }
 void t2()
 {
     for (int i = 0; i < 20; ++i)
     {
         cout << "t22222\n";
     }
 }
 int main()
 {
     thread th1(t1);  //实例化一个线程对象th1，使用函数t1构造，然后该线程就开始执行了（t1()）
     thread th2(t2);
 
     cout << "here is main\n\n";
 
     return 0;
 }