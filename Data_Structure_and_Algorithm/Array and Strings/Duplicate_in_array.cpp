#include <iostream>
using namespace std;

int main(){
    int arr[5]={1,3,2,2,4};
    int ans=0;
    for(int i=0;i<5;i++){
        ans=ans^arr[i];
    }
    for(int i=0;i<5;i++){
    ans=ans^i;
    }
    cout<<ans;

}