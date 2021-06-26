/*
方法二：
只有为9的时候才需要对该位前面的数进行操作，否则直接对该一位加一即可
如果该数组里面元素全部为9
则结果一定为1 后面len(digits的长度）个0

*/


#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int p = digits.size() - 1;
        
        for(int i = p; i > 0 ; i--){
            if(digits[i] == 9){
                digits[i] = 0;  
            }
            else{
                digits[i]++;
                return digits;
            }
        }
        vector <int> tmp(p+2, 0);
        tmp[0] = 1;
        return tmp;   
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
方法二：
只有为9的时候才需要对该位前面的数进行操作，否则直接对该一位加一即可
如果该数组里面元素全部为9
则结果一定为1 后面len(digits的长度）个0
*/