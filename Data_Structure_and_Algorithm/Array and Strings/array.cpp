#include <iostream>
using namespace std;

int print_array(int arr[], int size){
    cout<<"Printed elements of the array are = ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int raju[15]={1,2};
    print_array(raju,15);

    int x[5]={1,5,6,6,8};
    print_array(x,5);
}
