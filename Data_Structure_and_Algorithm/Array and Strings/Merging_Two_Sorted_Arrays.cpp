#include<iostream>
using namespace std;

void merging_sorted_array(int arr1[],int size1,int arr2[],int size2,int arr3[]){
    int i=0, j=0, k=0;
    while(i<size1 && i<size2){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            k++;
            i++;
        }else{
            arr3[k]=arr2[j];
            k++;
            j++;
        }
    }
    while(i<size1){
        arr3[k]=arr1[i];
        k++;
        i++;
    }
    while(j<size2){
        arr3[k]=arr2[j];
        k++;
        j++;
    }
}

int main(){
    int arr1[5]={0,2,3,4,5};
    int arr2[6]={1,6,7,8,9,10};
    int arr3[5+6];
    int i=0, j=0;
    merging_sorted_array(arr1,5,arr2,6,arr3);
    for(int i=0;i<11;i++){
        cout<<arr3[i]<<", ";
    }
}