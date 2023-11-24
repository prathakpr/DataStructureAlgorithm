#include<iostream>
using namespace std;

class hero {
    public:
    int health=100;
};

int main(){
    //cration of object
    hero obj1;
    cout<<sizeof(obj1)<<endl;
    cout<< obj1.health;

}