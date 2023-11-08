#include <bits\stdc++.h>
using namespace std;

int main(){
    string n;
    cin>>n;
    int hash[256]={0};
    for(int i=0;i<n.size();i++){
        hash[n[i]]+=1;
    }

    cout<<"\n";
    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        cout<<c<<"="<<hash[c]<<",";
    }
}