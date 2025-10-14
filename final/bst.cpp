#include<iostream>
using namespace std;
struct node
{
    node*left,*right;
    int value;
};
node*main_root=NULL;

node*createNode(int data){
node*temp=new node();
temp->value=data;
temp->left=NULL;
temp->right=NULL;
return temp;
}
node*insertNode(node*root,int value){
    if(root==NULL){
       return createNode(value);
    }if(value<root->value){
       root->left=insertNode(root->left,value);
    }else if(value>root->value){
          root->right=insertNode(root->right,value);
    }
    return root;
}
node*preorder(node*root){
    if(root!=NULL){
     cout<<root->value<<"->";
    preorder(root->left);
     preorder(root->right);
    }
}
node*inorder(node*root){
    if(root!=NULL){
    inorder(root->left);
     cout<<root->value<<"->";
     inorder(root->right);
    }
}
node*postorder(node*root){
    if(root!=NULL){
    postorder(root->left);
     postorder(root->right);
     cout<<root->value<<"->";
    }
}
node*max(node*root)
{
    while (root->right!=NULL)
    {
        root=root->right;
    }
    return root;
}

int main(){
    main_root=insertNode(main_root,6);
     insertNode(main_root, 4);
    insertNode(main_root, 7);
    insertNode(main_root, 2);
    insertNode(main_root, 5);
    insertNode(main_root, 8);
    insertNode(main_root, 3);
    cout<<"preorder-";
    preorder(main_root);
    cout<<endl;
      cout<<"inorder-";
    inorder(main_root);
      cout<<endl;
      cout<<"postorder-";
    postorder(main_root);
    cout<<endl<<"max value is-"<<max(main_root)->value;

   
}