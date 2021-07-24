#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int count = 0;

        int head = 0;
        int tail = n;
        while(head < tail){
           int mid = (head + tail) / 2;
           if( nums[mid] >= target){
               if(nums[mid] == target){
                   count++;
               }

               tail = mid;
           }
           else{
               if( nums[mid] == target){
                   count++;
               }
               head = mid;

           }

        }
        return count;

    }
};
//budui

int main(){
    vector<int> nums = {5,7,7,8,8,10};
    int target = 8;

    Solution a;
    cout<<a.search(nums, target);
}
//其实我们要找的就是数组中「第一个等于 \textit{target}target 的位置」（记为 \textit{leftIdx}leftIdx）和「第一个大于 \textit{target}target 的位置减一」（记为 \textit{rightIdx}rightIdx）。当 \textit{target}target 在数组中存在时，\textit{target}target 在数组中出现的次数为 \textit{rightIdx}-\textit{leftIdx}+1rightIdx−leftIdx+1。

