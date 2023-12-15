  #include <iostream>
  #include<vector>
  using namespace std;
  
  
  int main(){

    int s=0;
    int e=6;
    int key=7;
   int mid=(s+e)/2;
 int arr[6]={1,4,7,9,12,15};

  while (s<=e)
   {
    if(key==arr[mid]){
        cout<<mid;
        break;
    }else if(key<arr[mid]){
        e=mid-1;
    }else{
        s=mid+1;
    }
    mid=(s+e)/2;
   }

   return 0;
  }