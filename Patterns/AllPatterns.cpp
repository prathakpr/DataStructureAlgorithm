
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
void print5_with_space(int n){
        for(int i=1; i<=2*n-1; i++){
            //stars
            int stars=i;
            if(i>n){
                stars=4*n-2*i;
            }
            else{
                stars=2*i-1;
            }
            for(int j=1; j<=stars; j++){
                if(j%2==0){
                    cout<<" ";
                }
                else{
                cout<<"*";
                }
            }
            cout<<"\n";
        }
}
void print6(int n){
    for(int i=1; i<=n; i++){
        int value;
        if (i%2==0) value=0;
        else value=1;

        for(int j=1; j<=i; j++){
            cout<<value;
            value=1-value;
        }
        cout<<"\n";
    }
}
void print6_with_spaces(int n){
    for(int i=1; i<=n; i++){
        int value;
        if(i%2==0) value=0;
        else value=1;
        for(int j=1; j<=2*i; j++){
            if(j%2==0){
                cout<<" ";
                value=1-value;
            }
            else cout<<value;
        }
        cout<<"\n";
    }
}
void print7(int n){
    for(int i=1; i<=n; i++){
        //fist right triangle
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        //second space triangle
        for(int j=1; j<=2*(n-i); j++){
            cout<<" ";
        }
        //print number
        for(int j=1; j<=i; j++){
             cout<<i-j+1;
        }
        cout<<"\n";
    }
    }    
    
    int main(){
        int n;
        cin>>n;
        print7(n);
        
        return 0;
    }