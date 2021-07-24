//二分法


#include<vector>
#include<iostream>
using namespace std;


class Solution {
public:
    int hIndex(vector<int>& citations) {
        int first = 0;
        int end = citations.size() - 1;
        int mid = (first + end) /2;
        int h = 0;
        while(citations[mid] > h){
            h = citations[mid];
        }

        

    }
};

int main(){
    vector<int> citations = {0,1,3,5,6};

}