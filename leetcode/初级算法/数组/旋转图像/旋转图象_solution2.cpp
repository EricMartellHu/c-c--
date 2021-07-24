/*
原地旋转
临时变量 temp


matrix[i][j] = temp 
matrix[i][j] = matrix[][]
matrix[][] = temp


matrix[0]

*/


#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for (int i = 0; i < n / 2; ++i) {
            for (int j = 0; j < (n + 1) / 2; ++j) {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[n - j - 1][i];
                matrix[n - j - 1][i] = matrix[n - i - 1][n - j - 1];
                matrix[n - i - 1][n - j - 1] = matrix[j][n - i - 1];
                matrix[j][n - i - 1] = temp;
            }
        }
//推导没看明白； 好像[i][j]需要两次交换，算了不看了
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