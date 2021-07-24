/*
设计一个主线程和子线程交替访问一个int类型的全局变量，主线程负责写入变量的内容，写入成功时，把状态置为DONE，子线程负责判断该变量的状态为DONE时，
读取该变量内容并写入文件ts.txt中，并将状态置为EMPTY并通知主线程继续写入.
要求:主线程在操作写入时，子线程无法操作该变量，同样的，子线程在读取该变量的值并写入文件时，主线程也无法操作该变量.
最终输出ts.txt的文本内容为1 2 3 4 5 6 7 8  
*/

/*
状态标识flag 1 为 done，0为empty
*/

#include<bits/stdc++.h>
using namespace std;

mutex mtx;
static int n = 0;
static int flag = 0;

void subthread(int &n){
    mtx.lock();

    if(flag == 0){
        //写入文件
        fstream ts;
        ts.open("ts.txt",ios::out);
        ts<<n<<endl;
        ts.close();

        flag = 0;
        //通知主线程继续写入。  那么写一个函数来唤醒主线程？
     //  thread t(mainthread);
    }
    ++n;

    mtx.unlock();

}


// void mainthread(int &n){
//     mtx.lock();

//     ++n;
//     flag = 1;AA

//     mtx.unlock();

//     thread t(subthread);
// }






int main(){
    
    thread t1;
    while(n < 9){
        thread t(subthread);

        t.join();
    }

}