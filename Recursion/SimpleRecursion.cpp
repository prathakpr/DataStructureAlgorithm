#include <bits/stdc++.h>
using namespace std;

int Gnt=0;

void SimpleRecursion(){
    if(Gnt<=5) {
        cout<<"Recursion"<<Gnt<<"\n";
        Gnt++;
    }
    else return;
    SimpleRecursion();
}
void PrintName(int i,int n){
    if(i>n) return;
    cout<<"Raj\n";
    PrintName(i+1,n);
}

int main(){
    int n;
    cin>>n;
    PrintName(1,n);
}