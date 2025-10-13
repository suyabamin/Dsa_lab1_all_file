#include<iostream>
using namespace std;

struct node
{
    int value;
    node*left,*right;
};
node*main_root=NULL;
//create new node
node *createNode(int data){
    node*temp=new node();
    temp->value=data;
    temp->left=NULL;
    temp->right=NULL;
    return temp;

}
node*insertNode(node*root,int value){
if(root==NULL){
  return createNode(value);
    
}
if(value<root->value){
    root->left=insertNode(root->left,value);
}else if(value>root->value){
    root->right=insertNode(root->right,value);
}
return root;
}

void preorder(node*root){
    if(root!=NULL){
        cout<<root->value<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}
void inorder(node*root){
    if(root!=NULL){
inorder(root->left);
cout<<root->value<<" ";
inorder(root->right);
    }
}
void postorder(node*root){
    if(root!=NULL){
postorder(root->left);
postorder(root->right);
cout<<root->value<<" ";
    }
}


int main(){
    main_root=insertNode(main_root,6);
     insertNode(main_root, 4);
    insertNode(main_root, 7);
    insertNode(main_root, 2);
    insertNode(main_root, 5);
    insertNode(main_root, 8);
    insertNode(main_root, 3);
   cout<<"peprder----";
    preorder(main_root);
    cout<<endl;
    cout<<"inorder--";
    inorder(main_root);
    cout<<endl;
    cout<<"postorder--";
    postorder(main_root);
}