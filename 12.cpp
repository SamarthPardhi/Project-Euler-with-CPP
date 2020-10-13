#include <iostream>

using namespace std;

int tri_n(int n){
    return n*(n+1)/2;
}

bool no_divisor(int n){
    int c=0;
    int i;
    for (i=1;i<=n/i;i++){
        if (n%i==0){
            c+=2;
        }
        if (c>500){
            return true;
        }
    }
    return false;
}

int main(){
    int i;
    for(i=1;1;i++){
        if (no_divisor(tri_n(i))){
            cout<<tri_n(i);
            break;
        }
    }
    return 0;
}