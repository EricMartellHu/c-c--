#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
       int ans = 0;
       for(auto num : nums){
           ans = ans ^ num;
       }
       return ans;
    }
};

int main(){
    vector<int> nums = {4,1,2,1,2};
    Solution a;
    cout<<a.singleNumber(nums);
}

/*
答案是使用位运算。对于这道题，可使用异或运算 \oplus⊕。异或运算有以下三个性质。

任何数和 00 做异或运算，结果仍然是原来的数，即 a \oplus 0=aa⊕0=a。
任何数和其自身做异或运算，结果是 00，即 a \oplus a=0a⊕a=0。
异或运算满足交换律和结合律，即 a \oplus b \oplus a=b \oplus a \oplus a=b \oplus (a \oplus a)=b \oplus0=ba⊕b⊕a=b⊕a⊕a=b⊕(a⊕a)=b⊕0=b。



假设数组中有 2m+12m+1 个数，其中有 mm 个数各出现两次，一个数出现一次。令 a_{1}a 
1
​	
 、a_{2}a 
2
​	
 、\ldots…、a_{m}a 
m
​	
  为出现两次的 mm 个数，a_{m+1}a 
m+1
​	
  为出现一次的数。根据性质 3，数组中的全部元素的异或运算结果总是可以写成如下形式：

(a_{1} \oplus a_{1}) \oplus (a_{2} \oplus a_{2}) \oplus \cdots \oplus (a_{m} \oplus a_{m}) \oplus a_{m+1}
(a 
1
​	
 ⊕a 
1
​	
 )⊕(a 
2
​	
 ⊕a 
2
​	
 )⊕⋯⊕(a 
m
​	
 ⊕a 
m
​	
 )⊕a 
m+1
​	
 

根据性质 2 和性质 1，上式可化简和计算得到如下结果：

0 \oplus 0 \oplus \cdots \oplus 0 \oplus a_{m+1}=a_{m+1}
0⊕0⊕⋯⊕0⊕am+1  =am+1
​	
因此，数组中的全部元素的异或运算结果即为数组中只出现一次的数字。

*/