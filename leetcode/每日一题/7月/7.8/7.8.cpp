/*
930. 和相同的二元子数组
给你一个二元数组 nums ，和一个整数 goal ，请你统计并返回有多少个和为 goal 的 非空 子数组。

子数组 是数组的一段连续部分。
*/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int length = nums.size();
        int count = 0;
        //双循环暴力求解

        for(int i = 0; i < length; i++){
            int sum = 0;
            for(int j = i; j < length; j++){
                //sum = nums[i] + ... num[j]
                sum += nums[j];
                if(sum == goal) count++;
            }
        }

        return count;
        

    }
};

int main(){
    vector<int> nums ={1,0,1,0,1};
    int goal = 1;
    Solution a;
    cout<<a.numSubarraysWithSum(nums, goal);

}