#include <iostream>
using namespace std;

int print_binary(int arr[]){

    int s=0;
    int e=6;
    int key=20;
   int mid=(s+e)/2;

      while (s<=e)
   {
    if(key==arr[mid]){
        return mid;
        break;
    }else if(key<arr[mid]){
        e=mid-1;
    }else{
        s=mid+1;
    }
    mid=(s+e)/2;
   }
   return -1;
   

}

int main(){

    int arr[6]={1,4,7,9,12,15};


   cout<<print_binary(arr);
   
}