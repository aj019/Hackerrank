#include <iostream>

using namespace std;

int main(){

 int a,b,c;
 for(a=1;a<=3;a++){
    for(b=3-a;b>0;b--){
        cout<<" ";
    }

    for(c=2*a-1;c>0;c--)
        {
        cout<<"*";
    }

    cout<<"\n";
 }

return 0;
}
