#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N,l,r;
    cin>>N;
    cin.ignore();
    string str[N];

    for(int i=0;i<N;i++){
        getline(cin,str[i]);
        l= 0;
        r = str[i].size() - 1;

        while(l < r){

            if(str[i].at(l) == str[i].at(r) ){
                l++;
                r--;
            }else{
                break;
            }
        }

        if(l>=r){
            cout<<"-1"<<"\n";
        }
        else{
            int saveLeft = l;
            int saveRight = r;
            l++;

            int count = 1;
            while(l<r){
                if(str[i].at(l) == str[i].at(r) ){
                l++;
                r--;
                }else{
                    count =0;
                    break;
                }
            }

            int index = count?saveLeft:saveRight;
            cout<<index<<"\n";
        }

    }


    return 0;
}
