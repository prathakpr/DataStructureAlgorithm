#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin>>s;
    int arr[26]={0};
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        int num=ch-'a';
        arr[num]=arr[num]+1;
    }

    int maxi=-1, ans=0;
    for(int i=0; i<26; i++){
        if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];
        }
    }
    cout<<char('a'+ans);
}