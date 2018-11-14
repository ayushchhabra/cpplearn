  #include<iostream>
using namespace std;

class node{
    int data;
    node *left;
    node *right;
    node*(int d):data(d),left(NULL),right(NULL){
    }
};

node* createTree(){
    node* root=NULL;
    int d;
    cin>>d;
    if(d==-1){
        return NULL;
    }
    else {
    node* root=new node(d);
    root->left=createTree();
    root->right=createTree();
    return root;
    }
}
void preorder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
int main(){
    node* root=createTree();
    preorder(root);
    cout<<endl;
    return 0;
}

