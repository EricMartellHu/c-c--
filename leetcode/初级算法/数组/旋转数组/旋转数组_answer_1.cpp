#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int p = nums.size();
        vector<int> newNums(p);
        for(int i = 0; i < p; i++){
            newNums[(i+k) % p] = nums[i];
        }
        nums.assign(newNums.begin(), newNums.end());        
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

我们可以使用额外的数组来将每个元素放至正确的位置。用 nn 表示数组的长度，我们遍历原数组，
将原数组下标为 ii 的元素放至新数组下标为 (i+k)\bmod n(i+k)modn 的位置，最后将新数组拷贝至原数组即可。

时间复杂度： O(n)O(n)，其中 nn 为数组的长度。
空间复杂度： O(n)O(n)。
*/