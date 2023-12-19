#include <iostream>
#include<string>
using namespace std;

int main(){
    string b="MY NAME IS PULKIT";
    string temp="";
    for(int i=0;i<b.length();i++){
        if(b[i] ==' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        } else {
            temp.push_back(b[i]);
        }
    }
    for (int i = 0; i < temp.length(); i++)
    {
        cout<<temp[i]<<" ";
    }
    
}