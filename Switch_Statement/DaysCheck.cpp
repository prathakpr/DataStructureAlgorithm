#include<iostream>
using namespace std;

int main(){
    int day;
    cin>>day;

    switch(day){
// jesa case hoga use ki value ke correspon excute hoga
// but use baad sare case bhi hojynge if not break
        case 1:
        cout<<"Monday";
        break;

        case 2:
        cout<<"Tuesday";
        break ;

        case 3:
        cout<<"Wednesday";
        break;

        case 4:
        cout <<"Thurusday";
        break;

        case 5:
        cout<<"Friday";
        break;

        case 6:
        cout<<"Saturday";
        break;

        case 7:
        cout<<"Sunday";
        break;

        default :
        cout<<"invalid";
        // didn't using break cz this is last vese bhi complete hoga

    }
}
