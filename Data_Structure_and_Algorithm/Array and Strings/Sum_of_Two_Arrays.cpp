#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;


int main(){
    int arr1[4]={9,9,9,9};
    int arr2[3]={1,2,1};
    vector <int> temp={};

    int i=sizeof(arr1)/sizeof(arr1[0])-1;
    int j=sizeof(arr2)/sizeof(arr2[0])-1;
    int sum=0;
    int charry=0;
    while(i>=0 && j>=0){

        sum=arr1[i]+arr2[j]+charry;
        charry=sum/10;
        sum=sum%10;
        temp.push_back(sum);
        i--;
        j--;
    }
    while(i>=0){
        sum=arr1[i]+charry;
        charry=sum/10;
        sum=sum%10;
        temp.push_back(sum);
        i--;
    }
    while (j>=0)
    {
        sum=arr2[j]+charry;
        charry=sum/10;
        sum=sum%10;
        temp.push_back(sum);
        j--;
    }
    while (charry!=0)
    {
        sum=charry;
        charry=sum/10;
        sum=sum%10;
        temp.push_back(sum);
    }
    
    reverse(temp.begin(),temp.end());
    for(auto it : temp){
        cout<<it<<" ";
    }


}