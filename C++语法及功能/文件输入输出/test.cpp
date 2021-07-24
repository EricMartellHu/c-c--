#include<bits/stdc++.h>
using namespace std;
static int n = 1;

int main(){
    while(n < 9){
       fstream ts;
        ts.open("ts.txt",ios::out);
        ts<<n<<endl;
        ts.close();
        n++;
    }

}