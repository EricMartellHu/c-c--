/*
连续子数组且大小至少为2且元素综合为k的倍数

*/

/*
函数做出条件判断，那么返回bool

倍数： x%k == 0

连续子数组：sum[0][01] sum[0][012] sum[0][0123] 


for(int i = 0; i < nums.size(); i++){
    sum = nums[i];
    for(int j = i +1; j < nums.size(); j++){
        sum += nums[j];
        //zuopanduan
    }
}
*/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        for(int i = 0; i < nums.size(); i++){
            int sum = nums[i];
             for(int j = i +1; j < nums.size(); j++){
                 sum += nums[j];
                 //zuopanduan
                 if(sum % k ==0) return true;
                 }
        }
        return false; 
    }
};

int main(){
    vector<int> nums = {23,2,6,4,7}; 
    int  k = 13;
    Solution a;
    if(a.checkSubarraySum(nums, k))cout<<"true";
    else cout<<"false";
}