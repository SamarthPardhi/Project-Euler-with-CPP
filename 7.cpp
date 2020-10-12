#include <iostream>

using namespace std;

bool is_it_prime(int n){
    int i;
    if (n==2){
        return true;
    }
    for (i=2; i<=(n/i)+1;i++){
        if (n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int c,i;
    c=0;
    for (i=0;1;i++){
        if (is_it_prime(i)){
            c+=1;
        }
        if(c==10002){
            cout<<i;
            break;
        }
    }
}
