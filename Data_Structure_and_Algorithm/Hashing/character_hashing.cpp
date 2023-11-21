#include <bits\stdc++.h>
using namespace std;

int main(){
    string n;
    cin>>n;
    cout<<"given string :"<<n;
    int hash[26]={0};
    for(int i=0; i<n.size(); i++){
        hash[n[i]-'a']+=1;
    }
    cout<<"\n";
    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        cout<<hash[c-'a']<<",";
    }

}