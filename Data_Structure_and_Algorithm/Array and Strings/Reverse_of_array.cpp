#include <iostream>
using namespace std;

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int arr2[5]={5,8,7,6,9};
    for(int i=0; i<10/2; i++){
        swap(arr[i],arr[10-i-1]);
    }

     for(int i=0; i<10; i++){
       cout<<arr[i]<<" ";
    }
    cout<<endl<<"VV other niche VV"<<endl;
    
    // second array but other way

    int s=0;
    int e=5-1;
    while(s<e){
        swap(arr2[s++],arr2[e--]);
    }
      for(int i=0; i<=5-1; i++){
       cout<<arr2[i]<<" ";
    }
}