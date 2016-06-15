#include <cmath>
#include <cstdio>
#include <cstring>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   long hh,mm,ss;
    char ch[] ="AM";
    char s;
    cin>>hh>>s>>mm>>s>>ss>>ch;

    if(strcmp(ch,"AM")==0){
        cout<<hh<<":"<<mm<<":"<<ss;
    }
    else if(strcmp(ch,"PM")==0){
        hh+=12;
        cout<<hh<<":"<<mm<<":"<<ss;
    }
    return 0;
}
