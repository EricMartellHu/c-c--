#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> hashtable;
        for(auto i : nums){
            hashtable[i]++;
        }

        int count =0;
        if( nums.size()%2 == 0){
            count = nums.size() / 2;
        } 
        else{
            count = nums.size() / 2 +1;
        }

        for(auto i : hashtable){
            if( i.second >= count){
                return i.first;
            }
        }

        return -1;

    }
};


int main(){
    vector<int> nums = {2,2,1,1,1,2,2};
    Solution a;
    cout<<a.majorityElement(nums);
}