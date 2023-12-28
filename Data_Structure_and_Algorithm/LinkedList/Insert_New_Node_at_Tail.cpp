#include<iostream>
using namespace std;

class node{
    
    public:
    int data=5;
    node* next;
    node(int data){
        this->data=data;
        this->next= NULL;
    }
};

void insertAtHead( node* &head, int d){
    node* temp=new node(d);
    temp->next=head;
    head=temp;
}
void insertAtTail( node* &Tail, int d){
    node* temp=new node(d);
    Tail->next=temp;
    Tail=temp;
}
void print (node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    node* node1 = new node(10);
    //cout<< node1 ->data;

    node* head=node1;
    node* tail=node1;
    insertAtTail(tail,12);
    print (head);
    return 0;
}

