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
void SingleVariableReverseArray(int n, int a[], int i){
    if(i>=n/2) return;
    swap(a[i],a[n-i-1]);
    SingleVariableReverseArray(n,a,i+1);
}
bool f(int i, string s){
    if(i>=s.size()/2) return true;
    if(s[i]!=s[s.size()-i-1]) return false;
    return f(i+1,s);
}

int main2(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    SingleVariableReverseArray(n,a,0);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    string s="MADAM";
    cout<<f(0,s);

}