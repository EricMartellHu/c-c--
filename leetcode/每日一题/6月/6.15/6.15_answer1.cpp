//二分查找
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
       int left = 0, right = arr.size() - 1, ans = -1;
       while(left < right){
           int mid = (left + right) /2;
           if(arr[mid] > arr[mid+1]){
               ans = mid;
               right = mid -1;
           }
           else{
               left = mid -1;
           }
       }
    }
};
//这个会超时，  O(log(n))

// int n = arr.size();
//         int left = 1, right = n - 2, ans = 0;
//         while (left <= right) {
//             int mid = (left + right) / 2;
//             if (arr[mid] > arr[mid + 1]) {
//                 ans = mid;
//                 right = mid - 1;
//             }
//             else {
//                 left = mid + 1;
//             }
//         }
//         return ans;
//这个就不会，，有点无语  O(log(n-2))