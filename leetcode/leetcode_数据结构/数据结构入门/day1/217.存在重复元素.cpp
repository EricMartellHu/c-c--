#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> m;
        for(auto i : nums){
            m[i]++;
        }
        for(int i = 0; i < m.size(); i++ ){
            if(m[i] >= 2) return true;
        }
        return false;

    }

};

int main(){
    vector<int> nums = { 1,1,1,3,3,4,3,2,4,2};
    Solution a;
    if(a.containsDuplicate(nums)) cout<<"true";
    else cout<<"false";
}
//但是超时