#include <iostream>
using namespace std;

int iterate(int n){
    if (n%2==0){
        return n/2;
    }
    else{
        return 3*n+1;
    }
}

int count(int n){
    int c=1;
    while (n!=1){
        n=iterate(n);
        c+=1;
    }
    return c;
}

int main(){
    int max=0;
    int i,num,ans;
    for(i=100000;i<1000000;i++){
        num=count(i);
        if (num>max){
            max=num;
            ans=i;
        } 
    }
    cout<<max<<" "<<ans;
    return 0;
}