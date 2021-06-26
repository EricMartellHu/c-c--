#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                for(int j = i+1; j < nums.size(); j++){
                    if(nums[j] != 0){
                        int temp = nums[i];
                        nums[i] = nums[j];
                        nums[j] = temp;
                        break;
                    }
                }
            }
        }
    }
};

int main(){
    vector<int> nums = {0,1,0,3,12};
    Solution a;
    a.moveZeroes(nums);
    for(int i = 0; i < nums.size(); i++){
        cout<<nums[i]<<endl;
    }
}