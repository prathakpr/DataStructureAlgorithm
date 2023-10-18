#include <iostream>
using namespace std;

int main(){
    int cnt=0;
    int n;
    cin>>n;
    while(n>0){
        cnt=cnt+1;
        n=n/10;
    }
    cout<<cnt;
}