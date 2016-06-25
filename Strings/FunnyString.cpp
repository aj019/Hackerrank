#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N,i,j,k;
    cin>>N;
    cin.ignore();
    string str[N];
    for(i=0;i<N;i++){
       getline(cin,str[i]);
    }

    for(i=0;i<N;i++){
        int x = str[i].size();
        int count = 0;
        string str2 = str[i] ;
        reverse(str2.begin(), str2.end());


        for(j=0;j<x-1;j++){

            if(abs(str[i].at(j) - str[i].at(j+1)) != abs(str2.at(j) - str2.at(j+1))){
                count =0;
                break;
            }else{
                count = 1;
            }
        }

        if(count>0){
            cout<<"Funny"<<"\n";
        }else{
            cout<<"Not Funny"<<"\n";
        }
    }
    return 0;
}
