/*
一：
使用辅助数组
auto matrix_new = matrix;
原地修改就是在提交代码的时候，编译时检测它给定的参数里的内容是否改变，比如这题它给的是matrix，只
要最后返回的matrix内容改变了就可以，但是要注意浅拷贝的问题，比如用数组arr旋转后赋值，matrix = arr；
这样还是不能通过，因为matrix指向的是arr的内存地址，自己本身没有改变，只是保留了一个引用。

*/

/*
将matrix[i] 一组一组导入新数组中
matrix[i][j] = matrix_new[j][2-i]
*/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // C++ 这里的 = 拷贝是值拷贝，会得到一个新的数组
        auto matrix_new = matrix;
        int n = matrix.size();//col
        int m = matrix[0].size(); //row

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
               matrix_new[j][n-1-i] = matrix[i][j];
            }
        }
        //值拷贝
        matrix = matrix_new;
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