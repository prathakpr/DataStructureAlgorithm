#include <bits/stdc++.h>
using namespace std;

void count1(int n){
    int cnt=0;
    while(n>0){
        cnt=cnt+1;
        n=n/10;
    }
    cout<<cnt;
}
void count2(int n){
    int cnt=(int)log10(n)+1;
    cout<<cnt;
}
void reverse(int n){
    int revn=0;
    int lastdigit;
    while(n>0){
        lastdigit=n%10;
        n=n/10;
        revn=revn*10+lastdigit;
    }
    cout<<revn;
}
void palindrome(int n){
    int revn=0;
    int org=n;
    int lastdigit;
    while(n>0){
        lastdigit=n%10;
        n=n/10;
        revn=revn*10+lastdigit;
    }
    cout<<revn<<"\n";
    if(revn==org) cout<<"yes it is palindrome";
    else cout<<"no it is not palindrome";
}

int main(){
    int n;
    cin>>n;
    palindrome(n);
}