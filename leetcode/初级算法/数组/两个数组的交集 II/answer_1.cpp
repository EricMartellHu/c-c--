/*
由于同一个数字在两个数组中都可能出现多次，因此需要用哈希表存储每个数字出现的次数。对于一个数字，其在交集中出现的次数等于该数字在两个数组中出现次数的最小值。

首先遍历第一个数组，并在哈希表中记录第一个数组中的每个数字以及对应出现的次数，然后遍历第二个数组，对于第二个数组中的每个数字，如果在哈希表中存在这个数字，则将该数字添加到答案，并减少哈希表中该数字出现的次数


*/
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> nums1_map;
        for(auto i: nums1){
            nums1_map[i]++;
        }
        vector<int> ret;
        for(int i = 0; i < nums2.size(); i++){
            if(nums1_map.find(nums2[i]) != nums1_map.end()){
            ret.push_back(nums2[i]);
            //哈系表怎么减
            nums1_map[nums2[i]]--;
            if(nums1_map[nums2[i]] == 0)
            nums1_map.erase(nums2[i]);
            }
        }
        return ret;
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


/*
由于同一个数字在两个数组中都可能出现多次，因此需要用哈希表存储每个数字出现的次数。对于一个数字，其在交集中出现的次数等于该数字在两个数组中出现次数的最小值。

首先遍历第一个数组，并在哈希表中记录第一个数组中的每个数字以及对应出现的次数，然后遍历第二个数组，对于第二个数组中的每个数字，如果在哈希表中存在这个数字，则将该数字添加到答案，并减少哈希表中该数字出现的次数。

为了降低空间复杂度，首先遍历较短的数组并在哈希表中记录每个数字以及对应出现的次数，然后遍历较长的数组得到交集。

*/
