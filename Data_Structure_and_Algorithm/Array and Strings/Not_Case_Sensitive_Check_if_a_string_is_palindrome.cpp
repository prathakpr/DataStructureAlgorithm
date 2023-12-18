#include <iostream>
using namespace std;

int tolower(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
        }else {
            ch=ch -'A'+'a';
        }
        return ch;
    }


int main(){
    char ch[4]={'n','o','O','n'};
    for(int i=0;i<4/2;i++){
        if(tolower(ch[i])!=tolower(ch[4-1-i])){
            cout<<"not palindrome";
            break;
        }else if(i==4/2-1){
            cout<<"yes palinfrome";
        }
        }
    }
