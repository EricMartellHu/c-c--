#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans;
        string ret;
        while( columnNumber > 26){
            int yu = columnNumber % 26;
            char temp;
            if( yu  == 0)  {
                temp = 64+26;
                ans.push_back( temp );
                columnNumber /= 26;
                columnNumber--;
            }
            else  {
                temp = 64+yu;
                ans.push_back( temp ); 
                columnNumber /= 26;
            }
            
           
        }
        ans.push_back((char)64+ columnNumber );
        //cout<<ans<<endl;
        for(int i = ans.length()-1; i >= 0; i--){
            ret.push_back(ans[i]);
        }
        //reverse(ans.begin(), ans.end());
        return ret;
    }
};

int main(){

    int columnNumber = 52;
    Solution a;
    string ret = a.convertToTitle(columnNumber);
    cout<<ret;
   
}