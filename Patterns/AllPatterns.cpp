
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
void print4(int n){
    
    //triangle upper
    for(int i=0; i<n; i++){
        //spaces
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        //stars
        for(int j=0; j<2*i+1; j++){
            if(j%2==0){
            cout<<"*";
            }
            else{
                cout<<" ";
            }
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
              if(j%2==0){
            cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        cout<<"\n";
    }
}
void print5(int n){
    for(int i=1; i<=2*n-1; i++ ){
        //stars
        int stars=i;
        if(i>n){
            stars=2*n-i;
        }
        else{
        stars=i;
        }

        for(int j=1; j<=stars; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}
 
    int main(){
        int n;
        cin>>n;
        print5(n);
        
        return 0;
    }