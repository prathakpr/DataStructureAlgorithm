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
void armstrong(int n){
    int sum=0;
    int org=n;
    int ld;
    while(n>0){
        ld=n%10;
        n=n/10;
        sum=sum+(ld*ld*ld);
    }
    cout<<sum<<" \n";
    if(sum==org) cout<<"yes it is armstrong no.";
    else cout<<"no it is not armstrong no.";
}
void armstrongall(int n){
    int cnt=(int)log10(n)+1;
    int org=n;
    int sum=0;
    int ld;
    while(n>0){
        ld=n%10;
        n=n/10;
        sum=sum+pow(ld,cnt);
    }
    if(sum==org) cout<<sum<<"\n yes it is armstrong";
    else cout<<sum<<"\n no it is not armstrong";

}
void alldivisor(int n){
    for(int i=1; i<=n; i++){
        if(n%i==0) cout<<i<<"\n";
    }
}
void alldivisor_lessTC (int n){
    for(int i=1; i<=sqrt(n); i++ ){
        if(n%i==0){
            cout<<i<<"\n";
            if((n/i) !=i) cout<<n/i<<"\n";
        }
    }

}
void alldivisor_lessTC_Sorted(int n){
    vector <int> ls;
    for(int i=1; i<=sqrt(n); i++){
        if(n%i==0){
            ls.emplace_back(i);
            if(n/i !=i) ls.emplace_back(n/i);
        }
    }
    sort(ls.begin() , ls.end());
    for(auto it:ls) cout<<it<<" ";
}

int main(){
    int n;
    cin>>n;
    alldivisor_lessTC_Sorted(n);
}