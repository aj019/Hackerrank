#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

 void cut(int a[],int n,int smallest){
    int i;
    for(i=0;i<n;i++){
        a[i] = a[i] - smallest;
    }
}

 int find_small(int a[],int n){
    int small = INT_MAX;

    for(int i=0;i<n;i++){
        if(a[i] <small && a[i] > 0)
            small = a[i];
    }

    return small;
}

int main(){
    int n,count,small;
    cin >> n;
    int arr[n];
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    count = n;
    while(count > 0){
        cout<<count<<"\n";
        small = find_small(arr,n);
        cut(arr,n,small);
        count = 0;
        for(int j=0;j<n;j++){
            if(arr[j] >0)
                count++;
        }
    }

    return 0;
}
