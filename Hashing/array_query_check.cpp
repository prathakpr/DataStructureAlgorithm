#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int q;
    cout<<"given array is: ";
    for(int i=0;i<n;i++){
        cin>>q;
        arr[i]=q;
        cout<<arr[i];
    }
    cout<<"\n";
    //precomputation
    int hash[13]={0};
    for(int i=0; i<n; i++){
        hash[arr[i]] +=1;
    }

    int num;
    cin>>num;
    cout<<"ocurance of: ";
    while(num--){
        cout<<"\n"<<num<<"="<<hash[num]<<",";
    }
}