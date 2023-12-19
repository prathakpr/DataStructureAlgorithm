#include<iostream>
#include <string>
using namespace std;

int main(){
    string s;
    char ch[100];
    cin.getline(ch,sizeof(ch));
    s=ch;
    cout<<"your string :: "<<s;
}