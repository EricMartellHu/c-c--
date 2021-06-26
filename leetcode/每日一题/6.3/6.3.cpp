/*
525. 连续数组
给定一个二进制数组 nums , 找到含有相同数量的 0 和 1 的最长连续子数组，并返回该子数组的长度。

 

示例 1:

输入: nums = [0,1]
输出: 2
说明: [0, 1] 是具有相同数量0和1的最长连续子数组。
示例 2:

输入: nums = [0,1,0]
输出: 2
说明: [0, 1] (或 [1, 0]) 是具有相同数量0和1的最长连续子数组。
*/

/*
前缀和怎么用？
如果找到最长连续子数组，那么返回该数组的长度不就行了

对 0 和1 分别计数，连续的意思是子数组的连续， 那么前缀和就有用了
怎么使前缀和表示连续呢  sum %2 == 0
*/
/*
连续子数组， 第一个循环应该 对整个数组 
满足条件的子数组该返回j-i+1， 那么就要找出最长的子数组
条件是count
*/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            int count_0  = 0, count_1 = 0;
            //int sum = nums[i];
            for(int j = i; j < nums.size(); j++){
             //sum += nums[i];
             if(nums[j] == 0) count_0++;
             else count_1++;

             if(count_1 == count_0){
                 int p = j-i+1;
                 if(p > sum) sum = p;
             }
            }
        }
        return sum;
        

    }
};

int main(){
    vector<int>  nums = {0,1};
    Solution a;
    cout<<a.findMaxLength(nums);
}

/*
两个循环是要找出满足条件的子数组，再记录数组的长度， 因此n^2会超时
*/