#include<iostream>
using namespace std;

int main(){
    int grade;
    cin>>grade;

    if(grade<20){
        cout<<"failed";
    }
    else if(grade<40){
        cout<<"3rd devision";
    }
    else if(grade<60){
        cout<<"2nd devision";
    }
    else if(grade<=100){
        cout<<"1st Devision";
    }
}