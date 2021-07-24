#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        int n = ranges.size();
       // int m = ranges[0].size();
        for(int i = left; i <= right; i++){
            int temp = i;
            int flag = 0;
            for(int j = 0; j < n; j++){
               //每个temp 都需要在进行比较，只要有一组true就ok
               //三个if怎么样
               if( (ranges[j][0] <= temp) && (temp <= ranges[j][1]) ) { flag = 1; break;  }            
            }
            if(flag == 0) return false; 
        }
        return true;
    }
};
int main(){
    vector<vector<int> > ranges = {{1,2}, {3,4}, {5, 6}};
    int left =2;
    int right = 5;
    Solution a;
    if( a.isCovered(ranges, left, right) ) cout<<"true";
    else cout<<"fasle";
}