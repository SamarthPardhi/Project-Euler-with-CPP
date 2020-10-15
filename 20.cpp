#include <iostream>

int main(){
    long long int n=1;
    int i;
    for(i=1;i<101;i++){
        n=n*i;
        std::cout<<n<<std::endl;
    }
    std::cout<<n;
}