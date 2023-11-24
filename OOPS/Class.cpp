#include<iostream>
using namespace std;

class hero {

    int health=100;
    string name;
    int position;
    string level;

    public :
    int getHealth(){
        return health;
    }
    string getName(){
        return name;
    }

    void setName(string n){
        name=n;
    }


};

int main(){
    //cration of object
    hero obj1;
    cout<<sizeof(obj1)<<endl;
    cout<< obj1.getHealth();
    obj1.setName("Ramesh");
    cout<<endl<<obj1.getName();

}