/*
如果两个数组是有序的，则可以使用双指针的方法得到两个数组的交集。

首先对两个数组进行排序，然后使用两个指针遍历两个数组。

初始时，两个指针分别指向两个数组的头部。每次比较两个指针指向的两个数组中的数字，如果两个数字不相等，则将指向较小数字的指针右移一位，如果两个数字相等，将该数字添加到答案，并将两个指针都右移一位。当至少有一个指针超出数组范围时，遍历结束。

*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int first = 0, second = 0;
        vector<int> ans;
        int p = nums1.size();
        int q = nums2.size();

       while(first < p && second < q){
                if( nums1[first] == nums2[second]){
                    ans.push_back(nums1[first]);
                    first++;
                    second++;
                }
                else if(nums1[first] > nums2[second]){
                    second++;
                }
                else{
                    first++;
                }
            }
        return ans;

    }
};

int main(){
    vector<int> nums1 = {1,2,2,1};
    vector<int> nums2 = {2,2};
    Solution a;
    vector<int> ans  = a.intersect(nums1, nums2);

    for (int i = 0; i < ans.size(); i++)
    {
        /* code */
        cout<<ans[i];
    }
    
}


//搞定
