#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,i,j,temp;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
           if(arr[j]<arr[i]){
              temp = arr[i];
              arr[i] = arr[j];
              arr[j] = temp;
           }

        }
    }

    for(i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}
