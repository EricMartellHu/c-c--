#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    unordered_set<int> myset;
    myset.insert(3);
    myset.insert(5);
    myset.insert(3);
    cout<<myset.size()<<endl;
    myset.erase(3);
    if(myset.find(3) == myset.end()){
        cout<<"3 not found"<<endl;
    }
    return 0;
}

/*
一是这个容器是个集合，所以重复插入相同的值是没有效果的。大家可以看到我们这里第7行和第9行插入了2次3，实际上这个集合里也只有1个3，第10行输出的结果是2。
二是find的返回值是一个迭代器(iterator)，如果找到了会返回指向目标元素的迭代器，没找到会返回end()。

对于unordered_set，insert/find/erase的平均复杂度是O(1)，但是最坏复杂度是O(N)的，这里N是指容器中元素数量
*/


/*
unordered_set顾名思义是无序集合，满足集合定义，有三个函数
unordered_set::insert
unordered_set::find
unordered_set::erase

unordered_set::count
count函数只会返回1,0
对于count(x)
若us中存在x,返回1，反之，返回0


unordered_set它的实现基于hashtable，那么是不是基于unordered_map?
*/