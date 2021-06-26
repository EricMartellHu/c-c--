/*
双指针能不能做？
pointer1 == pointer2时，这就是两个for了，找到之后如何确定交集，如果nums[pointer1] == nums[pointer2],那么就该加入ans数组，不过如果ans中有此元素则不加入
*/
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int length1 = nums1.size();
        int length2 = nums2.size(); 
        int ret[length1] = {0};
        for(int i = 0; i < length1; i++){
            for(int j = 0; j < length2; j++){
                if(nums1[i] == nums2[j]){
                    for(int p = 0; p < nums1.size(); p++){
                        if(ret[p] == nums1[i]) break;
                    }
                    ret[i] = nums1[i];
                } 
            }
        }
        return ans;
    }
};

int main(){
    vector<int> nums1 = {4,9,5};
    vector<int> nums2 = {9,4,9,8,4};
    Solution a;
    vector<int> ret = a.intersect(nums1, nums2);
    for(int i = 0; i < ret.size(); i++){
        cout<<ret[i];
    }

}

//暴力未做出来