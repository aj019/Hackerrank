#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string.h>
using namespace std;


int main() {

    char a[10000];
    char ch='a';
    int i,T,count;
    long n;
    cin>>T;
    while(T--)
     {
        cin>>a;
    n=strlen(a);
        count=0;
    for(int i=0;i<=n/2;i++)
        {
          if(a[i]>a[n-(1+i)])
           {
            ch=a[i];
              while(ch!=a[n-(i+1)])
                  {
                  ch--;
                  count++;
              }
              a[i]=ch;
          }

          else if(a[i]<a[n-(1+i)])
           {
            ch=a[n-(i+1)];
              while(ch!=a[i])
                  {
                  ch--;
                  count++;
              }
              a[n-(i+1)]=ch;
          }
    }

        cout<<count<<"\n";
   }
    return 0;
}
