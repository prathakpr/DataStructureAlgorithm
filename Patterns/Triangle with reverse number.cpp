#include <iostream>
using namespace std;

void print1(int n){
    for(int i=0; i<n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    }
}

int main(){
    int n;
    cin>>n;
    print1(n);

}