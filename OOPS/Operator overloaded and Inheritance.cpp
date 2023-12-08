#include<iostream>
using namespace std;

class Human{
    public:
    int age=10;
    int bones = 206;
};

class male : public Human{
    public:
    string name= "rakesh";
};
class female : protected Human{
    public:
    string name= "roshni";

    int getbones(){
        return this -> bones;
    }
    public:
    void operator+ (male &obj) {
        cout<<"mai plus hoon asli";
    }
};

int main(){
    male h1;
    female h2;
    cout<< h1.name <<endl<<h1.age<<endl<<endl;
    cout<<h2.name<<endl<<h2.getbones();
    h2+ h1  ;
}