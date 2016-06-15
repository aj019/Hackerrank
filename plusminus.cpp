#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;


int main() {
    int N,a[100];
    float count1=0,count2=0,count3=0;
    cin>>N;

    for(int i=0;i<N;i++){
        cin>>a[i];

        if(a[i]>0)
            count1++;
        else if(a[i]<0)
            count2++;
        else
            count3++;
    }

    float m = count1/N;
    float n = count2/N;
    float l = count3/N;
    cout<<fixed<<setprecision(3)<<m<<"\n"<<n<<"\n"<<l;

    return 0;
}
