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
node*scarch(node*root,int key){
    if(root== NULL||root->value==key){
         return root;
    }if(key<root->value){
        return scarch(root->left,key);
    }if(key>root->value){
        return scarch(root->right,key);
    }
}

node*minamum(node*root){
    while (root->left!=NULL)
    {
       root=root->left;
    }
    return root;

}
node*max_vaue(node*root){
    while (root->right!=NULL)
    {
       root=root->right;
    }
    return root;

}
node*delete_node(node*root,int key){
    if(root==NULL){
        return root;
    }
    if(key<root->value){
        root->left=delete_node(root->left,key);
    }else if(key>root->value){
        root->right=delete_node(root->right,key);
    }else{
        if(root->left==NULL){
            node*temp=root->left;
            delete(root);
            return temp;
    }else if(root->right==NULL){
        node*temp=root->right;
        delete(root);
        return temp;
    }
    node*temp;
    temp=max_vaue(root->left);
    root->value=temp->value;
    root->left=delete_node(root->left,temp->value);

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
   cout<<"peprder----";
    preorder(main_root);
    cout<<endl;
    cout<<"inorder--";
    inorder(main_root);
    cout<<endl;
    cout<<"postorder--";
    postorder(main_root);
    cout<<endl<<"the value "<<scarch(main_root,5)->value<<" found";
    cout<<endl<<"the menemum value is--"<<minamum(main_root)->value<<endl;
    cout<<endl<<"the maximum value is--"<<max_vaue(main_root)->value<<endl;
   main_root= delete_node(main_root,3);
    cout<<"inorder--";
    inorder(main_root);
}
