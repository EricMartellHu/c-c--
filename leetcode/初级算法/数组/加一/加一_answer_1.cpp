/*
由 整数 组成的 非空 数组所表示的非负整数
数组代表着一个数，将这个数加一
*/


#include<iostream>
#include<vector>
#include<cstddef>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int p = digits.size() - 1;
        digits[p]++;
       int carry = 0; //进位
        for(int i = p; i > 0; i--){
           // int carry = digits[p] / 10; //进位
            digits[i] += carry;  
            carry = digits[i] / 10; 
            digits[i] = digits[i] % 10;
          
        }
        digits[0] += carry;
        if(digits[0] > 9){
            digits[0] = 0;
            digits.insert(digits.begin(),1);
        }
        
        return digits;
    }
};

int main(){
    vector<int> digits = {9,9};
    Solution a;
    digits = a.plusOne(digits);
    for(int i = 0; i < digits.size(); i++){
        cout<<digits[i];

        
    
    }
}


/*
方法一：原地手动实现十进制进位
1.将数组最后一位加一
2.从后往前遍历整个数组
3.每次都需要先将当前位置的元素加上前一位的进位（carry)，并且将该元素除以10，得到下一位的进位（carry)
4.最后 ，无论当前元素位多少都取该元素的个位
5.首位digits[0],不参与循环 ，因为如果这位需要进位，需要在头部插一位数，且这一位数一定是1。
后面的方法需要仔细思索一下+1意味着什么。
补充：

方法二：
只有为9的时候才需要对该位前面的数进行操作，否则直接对该一位加一即可
如果该数组里面元素全部为9
则结果一定为1 后面len(digits的长度）个0


*/