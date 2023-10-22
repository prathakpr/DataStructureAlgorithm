#include <bits/stdc++.h>
using namespace std;

int Gnt=0;

void SimpleRecursion(){
    if(Gnt<=5) {
        cout<<"Recursion"<<Gnt<<"\n";
        Gnt++;
    }
    else return;
    SimpleRecursion();
}

int main(){
    SimpleRecursion();
}