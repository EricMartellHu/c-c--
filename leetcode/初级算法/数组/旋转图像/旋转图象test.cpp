#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

    }
};


int main(){
    vector<vector<int>> matrix = { {1,2,3}, {4,5,6}, {7,8,9} };
    Solution a;
    a.rotate(matrix);

    int n = matrix.size();//col
    int m = matrix[0].size(); //row
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout<<matrix[i][j];
        }
        cout<<endl;
    }
}