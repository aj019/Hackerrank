#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T,count;
    char a[100000];
    cin>>T;
    while(T--)
        {
        count=0;
         cin>>a;
        int n=strlen(a);
        for(int i=0;i<n-1;i++)
            {
            if(a[i]==a[i+1])
               count++;
        }
        cout<<count<<"\n";

    }
    return 0;
}
