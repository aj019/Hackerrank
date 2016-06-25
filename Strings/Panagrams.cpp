#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i;
    int count =0;
    string str;
    getline(cin,str);
    int size = str.size();

    for(i=0;i<size;i++){
        char c = str.at(i);
        str.at(i) = tolower(c);
    }

    for (int i = 0; i < str.size(); i++)
    {
        for (int j = i+1; j < str.size(); j++)
        {
            if (str.at(i) == str.at(j))
            {
                str.at(j) = ' ';
            }
        }
    }

    for(i=0;i<size;i++){
        char c = str.at(i);
        if(c != ' '){
            if(c>=97 && c<=122){
                count+=c;

            }
        }
    }



    if(count == 2847){
        cout<<"pangram";
    }else{
        cout<<"not pangram";
    }

    return 0;
}
