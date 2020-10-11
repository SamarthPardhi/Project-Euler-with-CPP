#include <iostream>

using namespace std;
int main(){
    int i=2520;
    int j;
    for(i;1;i++){
        for (j=2;j<21;j++){
            if (i%j!=0){
                break;
            }
        }
    }
}