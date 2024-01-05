#include <iostream>
#include <stack>
using namespace std;

int main(){
    string RRR="ABCDEFGH";
    cout<<RRR;
    stack <char> rev;
    for(int i=0; i<RRR.length();i++){
        char ch = RRR[i];
        rev.push(ch);
    }
    cout<<endl;
    string ans;

    while(!rev.empty()){
        ans.push_back(rev.top());
        rev.pop();
    }
    cout<<ans;

}