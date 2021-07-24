#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int row = board[0].size();
        int col = board.size();
        int a[9][10] = {0};
        int b[9][10] = {0};
        int box[9][10] = {0};
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(board[i][j] == '.') continue;
                
                int num = board[i][j] - '0';

                if( a[i][num] ) return false;
                if( b[j][num] ) return false;
                if( box[j/3 + (i/3)*3][num] ) return false;

                a[i][num] = 1;
                b[j][num] = 1;
                box[j/3 + (i/3)*3][num] = 1;
            }
        }
        return true;

    }
};
/*
行哈希表来表明行有效
列哈希表来表明列有效
box哈希表来表明box有效  j/3 + (i/3)*3
用一个一维数组来表示可以吗a[9]
*/