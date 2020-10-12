#include <iostream>
using namespace std;
bool is_it_prime(long long int n){
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
    int i;
    long long int c;
    c=0;
    for(i=2;i<2000000;i++){
        if (is_it_prime(i)){
            c+=i;
        }
    }
    cout<<c;
    return 0;
}