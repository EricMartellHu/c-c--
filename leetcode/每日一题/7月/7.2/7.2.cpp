#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());
        int count  = 0;
        for(int i = 0; i < costs.size(); i++){
            if(coins >= costs[i]){
               coins -= costs[i]; count++;
            }
            else{
                break;
            }
            
        }
        return count;
    }
};

int main(){
    vector<int> costs = {7,3,3,6,6,6,10,5,9,2};
    int coins = 56;
    Solution a;

    int ans = a.maxIceCream(costs, coins);
    cout<<ans;

}
