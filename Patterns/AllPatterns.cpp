
#include <iostream>
using namespace std;

void print1(int n){
       for(int i=0; i<n; i++){
        //space
        for(int j=0; j<n-i-1; j++){
        cout<<" ";
        }
        // star
        for(int j=0; j<2*i+1; j++){
            cout<<"*";

        }
        //space
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        cout<<"\n";
        

    
       }
    }
void print2(int n){
    for(int i=0; i<n; i++){
        //space
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        //stars
        for(int j=0; j<2*(n-i)-1; j++){
            cout<<"*";
        }
        //spaces
        for(int j=0; j<n; j++){
            cout<<" ";
        }
        cout<<"\n";
    }
}
    
    int main(){
        int n;
        cin>>n;
        print2(n);
        
        return 0;
    }