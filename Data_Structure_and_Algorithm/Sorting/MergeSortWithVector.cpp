#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low,int mid, int high){
    vector <int> temp; //temprarory dynamic array
    int left=low; //starting of left array
    int right=mid+1; //starting of right wala array
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.emplace_back(arr[left]);
            left++;
        }
        else{
            temp.emplace_back(arr[right]);
            right++;
        }
    }
    while (left <= mid) {
        temp.emplace_back(arr[left]);
        left++;
    }

    while (right <= high) {
        temp.emplace_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++) {
     arr[i] = temp[i - low];
    }
}

void mergesort(vector<int> &arr,int low,int high){
    //isme apan array ko break kr rhe hai range mai
    if(low >= high) return;
        int mid = (low+high)/2;
        //left wala
        mergesort(arr,low,mid);
        //right wala
        mergesort(arr,mid+1,high);

        merge(arr,low,mid,high);
    
}

int main(){
    int n;
    cin>>n;
    vector <int> arr;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        arr.emplace_back(num);
    }
    mergesort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
}