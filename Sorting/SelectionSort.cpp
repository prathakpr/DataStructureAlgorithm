#include <bits\stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
//selection sorting
    for(int i=0;i<n-1;i++){
        int mini=i;
        for(int j=i+1;j<=n-1; j++){
           if(arr[j]<arr[mini]) mini=j;
        }

        int temp=arr[mini];
        arr[mini]=arr[i];
        arr[i]=temp;
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<",";
    }
}