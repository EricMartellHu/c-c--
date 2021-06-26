#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int p = nums.size()-1;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < p;i++){
           if(nums[i] == nums[i+1]) return true;
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

/*
解法：
在对数字从小到大排序之后，数组的重复元素一定出现在相邻位置中。
因此，我们可以扫描已排序的数组，每次判断相邻的两个元素是否相等，如果相等则说明存在重复的元素。

时间复杂度：O(N\log N)O(NlogN)，其中 NN 为数组的长度。需要对数组进行排序。

空间复杂度：O(\log N)O(logN)，其中 NN 为数组的长度。注意我们在这里应当考虑递归调用栈的深度。

*/