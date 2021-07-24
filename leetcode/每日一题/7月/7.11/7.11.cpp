#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(), citations.end());
        int n = citations.size() -1;
        int h = 0;

        for(int i = n; i >= 0; i--){
            int count = 0;
            h = citations[i];
            for(int j = 0; j < citations.size(); j++){
                if(citations[j] >= h) count++;
            }
            //cout<<count<<endl;
            if(count >= h) return h;
            
        }
        return 0;

    }
};

int main(){
    vector<int> citations = {11,15};
    Solution a;
    cout<<a.hIndex(citations);

}

/*
排序
从nums[n-1]开始一个个判断  
6的情况： 1 篇 引 6 不符合
5的情况:     2 篇 引5 不符合
3的情况：  3篇 引3 符合
*/

//总共有 h 篇论文分别被引用了至少 h 次。且其余的 N - h 篇论文每篇被引用次数 不超过 h 次。

//错了