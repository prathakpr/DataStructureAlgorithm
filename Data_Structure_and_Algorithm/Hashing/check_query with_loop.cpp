#include <bits\stdc++.h>
using namespace std;

int main(){
    string z;
    cin>>z;
    int cnt=0;
    for(int i=0; i<z.size(); i++){

        if(z[i]=='c') cnt +=1;
    }
    cout<<"c prints:"<<cnt;
}