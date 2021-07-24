#include<iostream>
#include<stdio.h>
using namespace std;

enum 
    {
        saturday  ,
        sunday,
        monday,
        tuesday,
        wednesday,
        thursday,
        friday
    } day;
int main(){
    cout<<saturday<<endl;
     cout<<sunday<<endl;
    cout<<monday<<endl;
    cout<<tuesday<<endl;
    cout<<wednesday<<endl;
    cout<<thursday<<endl;
     cout<<friday<<endl;

     day = friday;
     cout<<day;
    

}
