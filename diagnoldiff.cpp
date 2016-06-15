#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    long long int m[100][100];
    long long int sum1=0;
    long long int sum2 =0;
    long long int diff;
    int N,i,j;

    cin>>N;

    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            cin>>m[i][j];

            if(i==j){
                sum1+=m[i][j];
            }
            else if(i+j+1==N){

                sum2+=m[i][j];

            }

        }
    }

    cout<<sum1<<"\n";
    cout<<sum2<<"\n";

    if(sum1>sum2) {
    diff = sum1-sum2;
    cout <<diff;
    }

    else{
    diff = sum2-sum1;
    cout <<diff;
    }

    return 0;
}
