#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int D[2],M[2];
    long Y[2];

    for(int i=0;i<2;i++){

        cin>>D[i]>>M[i]>>Y[i];
    }

    if(Y[0]-Y[1] > 0){
        cout<<10000;
    }
    else if(Y[0]-Y[1]<0){
        cout<<0;
    }
    else if(M[0]-M[1] > 0){
        cout<<500*(M[0]-M[1]);

    }
    else if(D[0]-D[1]<0){
        cout<<0;
    }

    else if(D[0]-D[1]>0){
        cout<<15*(D[0]-D[1]);
    }

    else{

        cout<<0;
    }
    return 0;
}
