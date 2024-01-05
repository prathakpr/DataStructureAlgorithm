#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;

    node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }
};

void print(node* &head){
    node*temp =head;
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    node* head= new node(50);
    print(head);
}