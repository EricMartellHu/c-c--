#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void reverse(vector<int>& nums, int start, int end){
        while( start < end){
            swap(nums[start], nums[end]);
            start += 1;
            end  -= 1;
        }
    }
    void rotate(vector<int>& nums, int k) {
              k %= nums.size();
              reverse(nums,  0, nums.size() - 1);
              reverse(nums, 0 , k - 1);
              reverse(nums, k, nums.size() - 1);
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

/*
nums = "----->-->"; k =3
result = "-->----->";

reverse "----->-->" we can get "<--<-----"
reverse "<--" we can get "--><-----"
reverse "<-----" we can get "-->----->"
this visualization help me figure it out :)
*/