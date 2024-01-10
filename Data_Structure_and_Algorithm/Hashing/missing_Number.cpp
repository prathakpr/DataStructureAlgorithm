#include <iostream>
using namespace std;

int main(){

    int arr[4]={1,2,3,5};
        int hash[5]={0};
        for(int i=0;i<4;i++){
            hash[arr[i]] += 1;
        }
        for(int i=1;i<5;i++){
            if(hash[i]==0){
                cout<< i;
            }
        }

    }
