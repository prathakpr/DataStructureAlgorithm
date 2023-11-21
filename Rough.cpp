#include<bits/stdc++.h>
using namespace std;

int func(){
	cout<<"first"<<endl;
}
int func(int a){
	cout<<"sec"<<endl;
}
int func(int a , int b){
	cout<<"third"<<endl;
}

int main(){

	func(2,4);

	return 0;
}