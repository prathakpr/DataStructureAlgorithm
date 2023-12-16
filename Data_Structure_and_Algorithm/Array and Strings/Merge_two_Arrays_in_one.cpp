#include <iostream>
using namespace std;

int main(){
    int arr1[5]={12,2,3,4,5};
    int arr2[6]={5,6,7,8,9,10};

    int size1= sizeof(arr1)/sizeof(arr1[0]);
    int size2= sizeof(arr2)/sizeof(arr2[0]);

    int new_arr[size1+size2];
    for(int i=0; i<size1+size2;i++){
        if(i<size1) new_arr[i]=arr1[i];
        else new_arr[i]=arr2[i-size2+1];
    }

    for(int i=0; i<size1+size2;i++){
        cout<<new_arr[i]<<", ";
    }
}