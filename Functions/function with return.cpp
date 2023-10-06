#include <iostream>
using namespace std;

int bhai(int i){
    i=i*10;
    return i;

}

int main(){
    int i;
    cin>>i;
    bhai(i);
    int result= bhai(i);
    cout<<result;
}