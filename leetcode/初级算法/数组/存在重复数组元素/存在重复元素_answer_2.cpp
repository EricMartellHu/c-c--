#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> a;
        for(int x: nums){
            if(a.find(x)  != a.end()){
                return true;
            }
            a.insert(x);
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

