#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int p = nums.size()-1;
        for(int i = 0;  i < k; i++){
            int  temp = nums[p];
            for(int j = p; j >0; j--){
                nums[j] = nums[j-1];
            } 
            nums[0] = temp;
        }
    }
};

int main(){
    vector<int> nums = {-1,-100,3,99};
    int k = 2;
    Solution a;
    a.rotate(nums,k);
    for(int i = 0; i < nums.size(); i++){
        cout<<nums[i]<<endl;
    }
}

//代码好像没问题，不过超时过不了测试