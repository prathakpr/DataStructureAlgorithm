#include <iostream>
using namespace std;

int Aswap(int arr[],int size){
    for(int i=0; i<size; i=i+2){
        if(i+1<size){
        swap(arr[i],arr[i+1]);
        }
    }
}

int main(){
    int arr[8]={1,2,3,4,5,6,7,8};

    Aswap(arr,8);
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
}