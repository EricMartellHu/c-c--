/*
2021.6.15
852. 山脉数组的峰顶索引
符合下列属性的数组 arr 称为 山脉数组 ：
arr.length >= 3
存在 i（0 < i < arr.length - 1）使得：
arr[0] < arr[1] < ... arr[i-1] < arr[i]
arr[i] > arr[i+1] > ... > arr[arr.length - 1]
给你由整数组成的山脉数组 arr ，返回任何满足 arr[0] < arr[1] < ... arr[i - 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1] 的下标 i 。

 

示例 1：

输入：arr = [0,1,0]
输出：1
示例 2：

输入：arr = [0,2,1,0]
输出：1
*/

/*
要求返回的是数组索引。
找到nums[i] > nums[i+1] 的i，看看行不
*/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
       int index = -1;
        for(int i = 0; i < arr.size()-1; i++){
            if(arr[i] > arr[i+1]){
                index = i;
                break;
            }
        }
        return index;
    }
};


//过了，枚举