#include<iostream>
#include<string>
using namespace std;

int main(){
    string x="The Sky Is";
    int s=0;
    int e=x.length()-1;
    while(s<=e){
     swap(x[s++],x[e--]);
    }

    for(int i=0;i<x.length();i++){
        cout<<x[i]<<" ";
    }
}