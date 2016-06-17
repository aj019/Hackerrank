#include <cmath>
#include <cstdio>
#include <cstring>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;



int main(){
    int hh,mm,ss;
    char ch[2];
    char s;
    cin>>hh>>s>>mm>>s>>ss>>ch;

    if(strcmp(ch,"AM")==0){
        cout<<setfill('0')<<setw(2)<<hh<<":"<<setfill('0')<<setw(2)<<mm<<":"<<setfill('0')<<setw(2)<<ss;
    }
    else if(strcmp(ch,"PM")==0){
        hh+=12;
        cout<<setfill('0')<<setw(2)<<hh<<":"<<setfill('0')<<setw(2)<<mm<<":"<<setfill('0')<<setw(2)<<ss;
    }
    return 0;
}
