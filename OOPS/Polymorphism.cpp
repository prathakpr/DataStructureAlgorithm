#include <iostream>
using namespace std;

class function_overloading{
    public:
    void check(){
        cout<<"no aarguments";
    }
    void check(int i){
        cout<<"with argument";
    }
};

class operator_overloading{

};

int main(){
    function_overloading obj;
    obj.check();
    cout<<endl;
    obj.check(1);
}