#include <iostream>
#include <queue>
using namespace std;

int main(){
    priority_queue <int> max;
    max.push(5);
    max.push(8);
    max.push(9);

    priority_queue <int, vector<int>, greater<int>> min;
    min.push (6);
    min.push(4);
    min.push(1);

    int n=max.size();
    for(int i=0;i<n;i++){
        cout<<max.top()<<" ";
        max.pop();

    }
    cout<<endl;

    cout<<"abb dekhte hai min proty queue ko"<<endl;
    n=min.size();
    for(int i=0; i<n;i++){
        cout<<min.top()<<" ";
        min.pop();
    }

}