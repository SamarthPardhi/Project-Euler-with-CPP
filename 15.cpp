#include <iostream>

using namespace std;
int main(){
    int i;
    long long int d=1;
    long long int n=1;
    for(i=21;i<41;i++){
        d=d*i;
        cout<<d<<endl;
    }
    for(i=1;i<21;i++){
        n=n*i;
    }
    cout<<d;
    return 0;
}