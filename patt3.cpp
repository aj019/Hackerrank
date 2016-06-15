#include <iostream>

using namespace std;

int main(){

 int a,b,c,d;
 for(a=1;a<=4;a++){
    for(b=4-a;b>0;b--){
        cout<<" ";
    }

    for(c=1;c<=2*a-1;c++){
        cout<<"*";
    }
    cout<<"\n";
 }

return 0;
}
