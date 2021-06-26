#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

class Solution {
public:
    int halfQuestions(vector<int>& questions) {
        vector<int> ct(1001);
        for(auto q : questions)
            ct[q]++; //计数
        vector<int> num;
        for(auto cts : ct)
            if(cts > 0)
                num.push_back(cts);//数量
        sort(num.rbegin(), num.rend());//数量排序，多的优先
        int N = questions.size()>>1, ans = 0, i = 0;
        while(N > 0)
        {
            N -= num[i];//都拿一样的类型，可以减少大家不同题目类型
            i++;
            ans++;
        }
        return ans;
    }
};


int main(){
    vector<int> questions = {2,1,6,2};
    Solution a;
    cout<<a.halfQuestions(questions);
}