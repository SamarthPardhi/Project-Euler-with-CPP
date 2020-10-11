#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int i;
    int ans,a,b;
    a=0;
    for (i=1;i<101;i++){
        a+=pow(i,2);
    }
    b=50*101*50*101;
    ans=b-a;
    cout<<ans;
}