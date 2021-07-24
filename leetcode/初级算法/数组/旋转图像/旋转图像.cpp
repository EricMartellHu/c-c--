#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();//col
        int m = matrix[0].size(); //row

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                swap(matrix[i][j], matrix[j][2-i]);
            }
        }
    }
};

//3 x 3
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

    //冒泡排序

}

/*
应该是 i, j 经过旋转后有规律

所以 i, j  -> x, y

什么规律呢

*/


/*
1： 
一行换一列

matrix[0][0] = matrix[0][2]
matrix[0][1] = matrix[1][2]
matrix[0][2] = matrix[2][2]

matrix[0][j] = matrix [j][2] 

matrix[1][0] = matrix[0][1]
matrix[1][1] = matrix[1][1]
matrix[1][2] = matrix[2][1]

matrix[2][0] = matrix[0][0]
matrix[2][1] = matrix[]
matrix[i][j] = matrix[j][2-i]
并不是简单的swap
如果(x, y) -> (a, b)的话，需要另一个矩阵来存储，不合题意
用一个3x1数组来swap
或者用一个temp 来swap
首先来个数组 解法吧

arr1[3] = matrix[0][i] 
arr2[3] = matrix[1][i]
arr3[3] = matrix[2][i]

arr1的情况是：
matrix[0][2] = arr1[0]
matrix[1][2] = arr1[1]
matrix[2][2] = arr1[2]

arr2的情况是：
matrix[0][1] = arr2[0]
但是一个个改变无法满足4x4阿


那么四个的情况呢

2：
用temp来一个个替换


3：

*/


/* 官方解法
一：
使用辅助数组
auto matrix_new = matrix;
原地修改就是在提交代码的时候，编译时检测它给定的参数里的内容是否改变，比如这题它给的是matrix，只
要最后返回的matrix内容改变了就可以，但是要注意浅拷贝的问题，比如用数组arr旋转后赋值，matrix = arr；
这样还是不能通过，因为matrix指向的是arr的内存地址，自己本身没有改变，只是保留了一个引用。

二：
原地旋转
临时变量 temp

三：用翻转代替旋转
*/
