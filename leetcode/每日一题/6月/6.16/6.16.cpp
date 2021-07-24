/*
2021.6.16

877. 石子游戏
亚历克斯和李用几堆石子在做游戏。偶数堆石子排成一行，每堆都有正整数颗石子 piles[i] 。

游戏以谁手中的石子最多来决出胜负。石子的总数是奇数，所以没有平局。

亚历克斯和李轮流进行，亚历克斯先开始。 每回合，玩家从行的开始或结束处取走整堆石头。 这种情况一直持续到没有更多的石子堆为止，此时手中石子最多的玩家获胜。

假设亚历克斯和李都发挥出最佳水平，当亚历克斯赢得比赛时返回 true ，当李赢得比赛时返回 false 。

 

示例：

输入：[5,3,4,5]
输出：true
解释：
亚历克斯先开始，只能拿前 5 颗或后 5 颗石子 。
假设他取了前 5 颗，这一行就变成了 [3,4,5] 。
如果李拿走前 3 颗，那么剩下的是 [4,5]，亚历克斯拿走后 5 颗赢得 10 分。
如果李拿走后 5 颗，那么剩下的是 [3,4]，亚历克斯拿走后 4 颗赢得 9 分。
这表明，取前 5 颗石子对亚历克斯来说是一个胜利的举动，所以我们返回 true 。
*/


/*
亚历克斯先开始。
亚首先加入piles[0]和piles.end最大的
其次李加入最大的
加入结束后比较亚和李

那么加入后怎么删除元素
队首元素怎么删除。 队尾元素直接pop_back

一个for循环能行吗

如果将他sort呢， 那么直接取最后的元素，取完删除
*/


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int alex = 0,li = 0;
        int p = piles.size() - 1;
        sort(piles.begin(), piles.end());

        for(int i = p; i >= 0; i--){
            if( i % 2 != 0) alex += piles[i];
            else li += piles[i];
        }

        if(alex > li) return true;
        else return false;
    }
};

int main(){
    vector<int> piles = {5,3,4,5};
    Solution a;
    if(a.stoneGame(piles)) cout<<"true";
    else cout<<"false";
}

//答案直接返回true，佛了