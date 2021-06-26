//#pragma GCC diagnostic error "-std=c++11"
#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<string>
using namespace std;

class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> cnt;
        for (auto& word : words) {
            ++cnt[word];
        }
        vector<string> rec;
        for (auto& [key, value] : cnt) {  //tamade zhege zenme ban a 
            rec.emplace_back(key);
        }
        sort(rec.begin(), rec.end(), [&](const string& a, const string& b) -> bool {
            return cnt[a] == cnt[b] ? a < b : cnt[a] > cnt[b];
        });
        rec.erase(rec.begin() + k, rec.end());
        return rec;
    }
};

main(){
    Solution a;
}

