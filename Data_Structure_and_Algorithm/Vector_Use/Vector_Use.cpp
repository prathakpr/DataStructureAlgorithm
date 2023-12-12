#include <bits/stdc++.h>
using namespace std;

int main(){
    cout<<"jai ho"<<endl;;
    vector<int> bhai;
    bhai.push_back(5);
    bhai.push_back(8);
     bhai.push_back(7);
    bhai.push_back(9);

    cout<<"before erased ="<<endl;
   for(int i:bhai){
    cout<<i;
   }cout<<endl;

   cout<<"after erased ="<<endl;
   bhai.erase(bhai.begin()+1);
   for(int i: bhai){
    cout<<i;
   }
}