#include<iostream>
using namespace std;

int binary_rotated(int arr[],int size){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return mid;
}

int binary(int arr[],int s,int size,int target){
    int e=size-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}

int main(){
    int arr[2]={1,3};
    int size=2;
    int target=1;

    cout<<"pivot point of the rotated array is "<<binary_rotated(arr,size)<<endl;
    int pivot=binary_rotated(arr,size);
    if(target>=arr[0] && target<arr[pivot]){
        //line 1;
        cout<<"at line 1"<<endl;
        cout<<binary(arr,0,pivot,target);
    }else if(target>=arr[pivot] && target<arr[size]){
        //line 2;
        cout<<"at line 2"<<endl;
        cout<<binary(arr,pivot,size,target);

    }
    return 0;
}