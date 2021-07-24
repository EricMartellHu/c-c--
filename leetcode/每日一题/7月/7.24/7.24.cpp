#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    string maximumTime(string time) {
        for(int i = 0; i < time.size(); i++){
            if(time[i] == '?'){
                switch (i)
                {
                case 0: 
                 if(time[1] >= '4' && time[1] != '?'){
                     time[0] = '1';
                 }
                 else{  time[0] = '2';}
                    /* code */
                    break;
                case 1: 
                  if(time[0] == '2'){
                      time[1] = '3';
                      break;
                  }
                  else{
                      time[1] = '9';
                      break;
                  }
                case 3:
                  time[3] = '5';
                  break;

                case 4:
                 time[4] = '9';
                 break;

                
                default:
                    break;
                }
            }

        }
        return time;

    }
};

int main(){
    string time = "??:3?";
    Solution a;
    cout<<a.maximumTime(time);
}

/*
第一位 是 0 1 2 
如果第一位 是 0 则 第二位 为 0～9
如果第一位 是 1 则 第二位 为 0～9
如果第一位 是 2 则 第二位 为 0～4

第三位 为 ：

第四位为 0～5

第五位为 0～9
*/
