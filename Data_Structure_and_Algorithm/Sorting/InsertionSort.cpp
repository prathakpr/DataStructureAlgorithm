#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //insertion sort in the house

    for(int i=1; i<n ;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }

        for(int i=0;i<n;i++){
            cout<<arr[i]<<",";
        }
    return 0;
}