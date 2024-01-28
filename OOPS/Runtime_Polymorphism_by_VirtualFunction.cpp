#include<iostream>
using namespace std;

class base{
    public: 
    int jordaar=1;
    virtual void display(){
        cout<<"basejordaar"<<jordaar;
    }
};

class child_base : public base{
    public:
    int child_jordaar=2;
    void display(){
        cout<<"child jordaar"<<child_jordaar;
    }
};

int main(){
    base* pointer_to_base;
    child_base child_ka;
    pointer_to_base = &child_ka;
    pointer_to_base->display(); // can acess child ka now becase of virtual function
    //pointer_to_base->child_jordaar=3; 
    child_base* pointer_to_child;
    pointer_to_child->jordaar=4; 

    

    
}
