#include <bits\stdc++.h>
using namespace std;

int main(){
    string z;
    cin>>z;
    map <char,int>mp;
    for(int i=0;i<z.size();i++){
        mp[z[i]]++;
    }

    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        cout<<mp[c]<<",";
    }
}