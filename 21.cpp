#include <iostream>
using namespace std;

int div(int n){
    int i;
    int c=0;
    for (i=2;i<(n/i);i++){
        if (n%i==0){
            c+=i;
            c+=(n/i);
        
        }
    }
    return c+1;
}

int main(){

    int n=10000;
    int a[n];
    int i,j;
    int c=0;
    for (i=0;i<n;i++){
        a[i]=div(i+1);
    }
    for (i=1;i<n+1;i++){
       if (a[a[i-1]-1]==i){
           c+=i;
           c+=a[i-1];
           cout<<c<<endl;
       }
    }
    return 0;
}

