#include<unordered_map>
#include<iostream>
#include<vector>
#include<typeinfo>
using namespace std;

int main(){
    unordered_map<int, int> a;
    int value = 5;
    a[0] = value;
    auto it = a.find(5);
    //cout<<it->first;
    vector<int> b;
    cout<<sizeof(b.begin())<<endl;
    cout<< typeid(b.begin()).name()<<endl;
    cout<<endl;


}

//迭代器好像是个对象，像是指针   
//second是键值对的值，first是键
