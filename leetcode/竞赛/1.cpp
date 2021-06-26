#include<iostream>
#include<cmath>
using namespace std;

//第一种就是n分钟， 宽带加几倍合适呢？ log2 n
class Solution {
public:
    int leastMinutes(int n) {
        //加倍时间
        return ceil(log(n) / log(2)) +1;
    }
};



int main(){
    int n = 5;
    Solution a;
    cout<<a.leastMinutes(n);
    
}

/*
贪心算法，如果选择当前这一分钟不下载而是加倍，那么这个选择至少是跟不加倍是一样好的。举个例子，目前下载是a，这一分钟和下一分钟，下载量就是2a，加倍这一分钟和下一分钟的下载量也是0+2a = 2a。只有一种情况例外，那就是当前需要下载插件的剩余数量小于a，一分钟可以搞定，那就不需要加倍。
所以每一步判断剩余数量是不是需要超过一分钟就好了，超过一分钟，那就加倍。


*/