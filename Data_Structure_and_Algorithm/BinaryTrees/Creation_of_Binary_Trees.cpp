#include <iostream>
using namespace std;

class node{
    public:
    int mid;
    node* left;
    node* right;


    node(int d){
        this -> mid = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

node * build_tree(node* root){
    cout<<"enter mid data"<<endl;
    int mid;
    cin>>mid;
    root= new node(mid);
    if(mid == -1){
        return NULL;
    }
    cout<<"enter data left"<<endl;
    root->left=build_tree(root->left);
    cout<<"enter data right"<<endl;
    root-> right=build_tree(root->right);
    return root;
    
}

int main(){
    node* root=NULL;
    //creation of tree
    root= build_tree(root);
    cout<<root;

}