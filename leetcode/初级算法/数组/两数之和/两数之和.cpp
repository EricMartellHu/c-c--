#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++){
            int less = target - nums[i];
            for(int j = i; j < nums.size(); j++){
                if(less == nums[j] && i != j ){
                    ans.push_back(i);
                    ans.push_back(j);
                }
            }
        }

        return ans;
    }
};

int main(){
    vector<int> nums= {2,7,11,15};
    int target = 9;
    Solution a;
    vector<int> ans = a.twoSum(nums, target);
    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<endl;
    }


}