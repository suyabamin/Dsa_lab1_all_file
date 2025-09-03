#include<iostream>
using namespace std;
struct node{
int value;
node*next;
node*prev;
};
node*head=NULL;
void print(){
  cout<<"your link lest is-----"<<endl;
node *temp=head;
while(temp!=NULL){
    cout<<temp->value<<"->";
    temp=temp->next;
}
cout<<" "<<endl;
}


node*cerateNode(int x){
node*newItem=new node();
newItem->value=x;
newItem->next=NULL;
newItem->prev=NULL;
}

void insertBegain(int x){
node*newItem=cerateNode(x);
if(head!=NULL){
    newItem->next=head;
    head->prev=newItem;
}
head=newItem;
}

void insertlast(int x){
node*newItem=cerateNode(x);
if(head==NULL){
    insertBegain(x);
}
else{
         node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newItem;
   newItem->prev=temp;
   newItem->next=NULL;
}

}


int main(){
insertBegain(5);
insertBegain(4);
insertBegain(3);
print();
insertlast(100);
print();
}
