#include <iostream>
#include <cmath>
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

// int main(){
//     bool p=is_it(100);
//     cout<<p;
// }

int main(){
    int i=2;
    for(i;1;i++){
        if (600851475143%i==0){
            if (is_it_prime(600851475143/i)){
                cout<<600851475143/i;
                break;
            }
        }
    }
}