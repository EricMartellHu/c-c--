#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int p = nums.size();
        for(int i = 0; i < p; i++){
            for(int j = i+1; j < p; j++){
                if(nums[i] == nums[j]) return true;
            }
        }
        return false;
    }
};

int main(){
    vector<int> nums={1,2,3,1};
    Solution a;
    if(a.containsDuplicate(nums)) cout<<"true";
    else cout<<"false";
}


//代码没问题的，但是超时不符合规则