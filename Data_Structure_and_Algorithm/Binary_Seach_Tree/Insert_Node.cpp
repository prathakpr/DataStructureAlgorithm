#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this->data =d;
        this->left=NULL;
        this->right=NULL;
    }
};

node* insertInto_BST(node* root, int d){
    //base case
    if(root==NULL){
        root = new node(d);
        return root;
    }
    // righ part mai
    if(d > root->data){
        root->right=insertInto_BST(root->right,d);
    }
    // left part mai
    else {
        root->left = insertInto_BST(root->left,d);
    }
    return root;
}
void TakeInput(node* &root){
    int data;
    cin>>data;
    while(data != -1){
        root = insertInto_BST(root,data);
        cin>>data;
    }
}

int main(){
    node* root=NULL;
    cout<<"enter data to insert or create bst"<<endl;
    TakeInput(root);

    return 0;

}