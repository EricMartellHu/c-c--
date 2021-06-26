/*
数字 1-9 在每一行只能出现一次。
数字 1-9 在每一列只能出现一次。
数字 1-9 在每一个以粗实线分隔的 3x3 宫内只能出现一次。
*/

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char> >& board) {
        for(int i = 0; i  < board.size();i++){
            for(int j = i; j < board[i].size() - 1; j++){
                for(int p = j + 1; p < board[i].size(); p++){
                    if( board[i][j] != '.' && board[i][j] == board[i][p]){
                        return false;
                    }
                }
            }
        }

        for(int i = 0; i < board[0].size(); i++){
            for(int j = 0; j < board.size()-1; j++){
                for(int p =j +1; p < board.size(); p++){
                    if( board[j][i] != '.' && board[j][i] == board[p][i]){
                        return false;
                    }
                }
            }
        }

       unordered_map<char,int> boxs[9];

        for(int i = 0; i < board.size();i++){
            for(int j = 0; j  < board[0].size(); j++){
                if(board[i][j] != '.'){
                     int box_index = (i / 3 ) * 3 + j / 3;
                     if( boxs[i].count(board[i][j]) ){
                         return false;
                         }
                    else{
                        boxs[i].emplace( board[i][j]);
                        }
                } 
            }
        }
    }
};

int main(){
    vector<vector<string> > board = 
{{"5","3",".",".","7",".",".",".","."}
,{"6",".",".","1","9","5",".",".","."}
,{".","9","8",".",".",".",".","6","."}
,{"8",".",".",".","6",".",".",".","3"}
,{"4",".",".","8",".","3",".",".","1"}
,{"7",".",".",".","2",".",".",".","6"}
,{".","6",".",".",".",".","2","8","."}
,{".",".",".","4","1","9",".",".","5"}
,{".",".",".",".","8",".",".","7","9"}};
}


//哪里错了，不知道
