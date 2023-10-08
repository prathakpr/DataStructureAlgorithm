
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
void print3(int n){

    //triangle upper
    for(int i=0; i<n; i++){
        //spaces
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        //stars
        for(int j=0; j<2*i+1; j++){
            cout<<"*";
        }
        //spaces
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        cout<<"\n";
    }
    //triangle down
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        for(int j=0; j<2*(n-i)-1; j++){
            cout<<"*";
        }
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        cout<<"\n";
    }
}   
    int main(){
        int n;
        cin>>n;
        print3(n);
        
        return 0;
    }