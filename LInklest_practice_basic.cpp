#include<iostream>
using namespace std;
struct node{
node*next;
int value;

};
node* head=NULL;
//print
void print(){
node *temp=head;
while(temp!=NULL){
    cout<<temp->value<<"->";
    temp=temp->next;
}
cout<<" "<<endl;
}

void insertbegain(int x){
node*newItem=new node();
newItem->value=x;
newItem->next=head;
head=newItem;

}
void  insertlast(int x){
node*newItem=new node();

if(head==NULL){
  insertbegain(x);
}else{
    node*temp=head;
newItem->value=x;
while(temp->next!=NULL){
    temp=temp->next;
}
  temp->next=newItem;
  newItem->next=NULL;

}
}
void insertAfter(int n,int x){
node* newItem=new node();
if(head==NULL){
    insertbegain(x);
}else{
node*temp=head;
  while(temp!=NULL&&temp->value!=n){

        temp=temp->next;

}
newItem->value=x;
newItem->next=temp->next;
temp->next=newItem;
}

}
void deleteBegain(){
    if(head==NULL){
        return;
    }else{
   node*temp=head;
   head=head->next;
   delete(temp);
    }
}

void  deleteLast(){
  if(head==NULL){
    return;
  }
  node*temp=head;
  node*prev=NULL;
  while(temp->next!=NULL){
        prev=temp;
    temp=temp->next;
  }if(prev==NULL){
    head=NULL;
  }
  prev->next=NULL;
}


int main(){
    insertbegain(4);
     insertlast(5);
     insertlast(7);
     insertlast(8);
     deleteBegain();
     deleteLast();
     insertAfter(5,6);
    print();

return 0;
}
