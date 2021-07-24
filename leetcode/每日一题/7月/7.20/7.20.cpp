//i, j  

//35 54 42 24 46
/*
max( n1, n2, ...);
双指针 
n1 =  num[i] + nums[j] ;  再delete数组的元素 nums.pop_back(nums[i])

n2 = num[i] + nums[j] ；

最后求max( n1, n2, ...);
如果比result小则更新
*/

/*
滑动窗口怎么说
说不了把吧
*/


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size()-1;
        int pairs = nums.size() / 2;
        vector<int> arr;
        int ret = nums[n] + nums[n-1];

        //tiaojian
        int i, j;
        for(int i = 0; i < nums.size(); i++){
            for(int j = i + 1; j < nums.size(); j++){

            }
        }





    }
};
