#include <iostream>
#include <string>
#include<bits/stdc++.h>

using namespace std;

bool isit_pallindrome(int n){
    string str=to_string(n);
    string str_1=to_string(n);
    reverse(str.begin(),str.end());
    if (str==str_1){
        return true;
    }else{
        return false;
    }
}

int main(){
    int i,j,c;
    c=0;
    for (i=100;i<1000;i++){
        for (j=100;j<1000;j++){
            if (isit_pallindrome(i*j) and i*j>c){
                c=i*j;
            }
        }
    }
    cout<<c;
}