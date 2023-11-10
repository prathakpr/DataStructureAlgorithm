#include<bits\stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

//insertion sort takes an elemt and plae it in a corrct order
    for(int i=1;i<n;i++){
        int j=i;
        while(j>0 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
}