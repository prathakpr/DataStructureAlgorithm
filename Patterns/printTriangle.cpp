#include <iostream>
using namespace std;

void print1(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<'*';
        }
        cout<<"\n";
    }
}

int main(){
    int n;
    cin>>n;
    print1(n);
    //for(int i=0; i<t; i++){
      //  int n;
        //cin>>n;
        //print1(n);
    //}

}