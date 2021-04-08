#include <iostream>
#include <list>
using namespace std;

sn (int n){
  int sn;
  sn=(1504170715041707*n) % 4503599627370517;
  return sn
}

int main() {
  int n=1;
  int ans=1504170715041707;
  int e=1504170715041707;
  list<int> mylist;
  mylist.push_back(e);
   while (True) {
     n+=1;
     if (s(n)<min_element(mylist)) {
       ans+=s(n)
       mylist.push_back(s(n))
     }:
     if (n==100000) {
       break
     };
   };
  cout <<  mylist;
  return 0;
};
