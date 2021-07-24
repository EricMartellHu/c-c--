/*
981. 基于时间的键值存储
创建一个基于时间的键值存储类 TimeMap，它支持下面两个操作：

1. set(string key, string value, int timestamp)

存储键 key、值 value，以及给定的时间戳 timestamp。
2. get(string key, int timestamp)

返回先前调用 set(key, value, timestamp_prev) 所存储的值，其中 timestamp_prev <= timestamp。
如果有多个这样的值，则返回对应最大的  timestamp_prev 的那个值。
如果没有值，则返回空字符串（""）。

*/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

class TimeMap {
public:
    /** Initialize your data structure here. */
    TimeMap() {

    }
    
    void set(string key, string value, int timestamp) {

    }
    
    string get(string key, int timestamp) {

    }
};

int main(){
    string inputs[] =  {"TimeMap","set","get","get","set","get","get"};

   // vector<vector<string> > kkk = { {}, {"foo","bar",1}, {"foo",1}, {"foo",3}, {"foo","bar2",4}, {"foo",4}, {"foo",5} };

     TimeMap* obj = new TimeMap();
    // obj->set(key,value,timestamp);
    // string param_2 = obj->get(key,timestamp);
}