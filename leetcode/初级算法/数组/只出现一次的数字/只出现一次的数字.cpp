#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        vector<int> count = {0}; //heap_buffer_overflow, 改用定长数组int  count[10000] = {0};，但是代码超时，说明代码可行但是超时
        for(int i = 0; i < nums.size(); i++){
            for(int j = 0; j < nums.size(); j++){
                if(nums[i] == nums[j]) count[i]++;
            }
        }
        int ans;
        for(int i = 0; i < nums.size(); i++){
            if(count[i] == 1) ans = i;
        }
        return nums[ans];
    }
};

int main(){
    vector<int> nums = {4,1,2,1,2};
    Solution a;
    cout<<a.singleNumber(nums);
}

//暴力又超时， 