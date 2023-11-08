#include <bits\stdc++.h>
using namespace std;

int main(){
    //selection sort
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    //sorting here
    for(int i=0;i<n-1;i++){
       int mini=i;
        for(int j=i+1;j<=n-1;j++){
            if(arr[j]<arr[mini]) mini=j;
        }

        //swaping
        swap(arr[mini],arr[i]);
    }

    //printing
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
}