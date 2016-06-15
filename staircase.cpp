#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int i,j,k,N;

    cin>>N;

    for(i=1;i<=N;i++){

        for(j=0;j<N-i;j++)
            cout<<" ";

        for(k=0;k<i;k++)
            cout<<"#";

        cout<<"\n";
    }
    return 0;
}
