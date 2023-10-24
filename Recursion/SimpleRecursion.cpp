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
void reverseprint(int i, int n){
    if(i<=0) return;
    cout<<i<<"\n";
    reverseprint(i-1,n);

}
void BackTruckCount(int i, int n){
    if(i<=0) return;
    BackTruckCount(i-1,n);
    cout<<i<<"\n";
}
void BackTruckReCount(int i, int n){
    if(i>n) return;
    BackTruckReCount(i+1,n);
    cout<<i<<"\n";
}
void SumofNum(int i, int sum){
    if(i<0){
        cout<<sum;
        return;
    }
    SumofNum(i-1,sum+i);
}


int main(){
    int n;
    cin>>n;
    SumofNum(n,0);
}