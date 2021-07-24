//对于数组中每个元素，我们将它插入到哈希表中。
//如果插入一个元素时发现该元素已经存在于哈希表中，则说明存在重复的元素。

#include<iostream>
#include<unordered_map>
#include<unordered_set>
#include<vector>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> m;
        for(auto i : nums){
            if( m.find(i) != m.end()) return true;
            m.insert(i);
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