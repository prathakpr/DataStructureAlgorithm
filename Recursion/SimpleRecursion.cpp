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
    if(i<1){
        cout<<sum;
        return;
    }
    SumofNum(i-1,sum+i);
}
int SumfunctionalWay(int n){
    if(n==0){
        return 0;
    }
    return n + SumfunctionalWay(n-1);
}
int FactorialFunctionalWay(int n){
    if(n==0) return 1;
    return n * FactorialFunctionalWay(n-1);
}
void ReverseofArray(int n,int a[],int u, int v){
    if(u>=v) return;
    swap(a[u],a[v]);
    ReverseofArray(n,a,u+1,v-1);
}


int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ReverseofArray(n,a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}