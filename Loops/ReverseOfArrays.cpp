#include <iostream>
using namespace std;

int main(){
    int A[5]={2,5,6,4,3};
    for(int i=0; i<5/2; i++){
        int temp =A[i];
        A[i]=A[5-i-1];
        A[5-i-1]=temp;
        
    }
    for(int i=0; i<5; i++){
        cout<<A[i]<<" ";
    }
}
