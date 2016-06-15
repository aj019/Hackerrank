#include <iostream>
#include <stdio>

using namespace std;

int main(){
    int a,b,c,d;
 for(a=1;a<=4;a++){
    for(b=4-a;b>0;b--){
        cout<<" ";
    }

    for(c=1;c<a;c++){
        cout<<"*";
    }
    for(d=4-a;d>0;d--){
        cout<<" ";
    }

    cout<<"\n";
 }

    return 0;
}
