#include<iostream>
using namespace std;
void insertBegin(int x);
void insertLast(int x);
void insertAfter(int n,int x);
void deleteBegain();
void deleteLast();
void display();
struct node{
int val;
node *next;
};
node* head=NULL;
int main(){
//insertBegin(4);
//display();
insertLast(5);
insertLast(6);
insertLast(7);
insertLast(8);
insertLast(9);
//insert after
insertAfter(5,4);
deleteBegain();
deleteLast();
display();

}

void deleteBegain(){
if(head==NULL){
    return;
}else{
 head=head->next;
}
}

void deleteLast(){
   if(head==NULL){
    return;
   }
   node*temp=head;
   node *prev=NULL;
   while(temp->next!=NULL){
    prev=temp;
    temp=temp->next;
   }if(prev==NULL){
   head=NULL;
   }
   prev->next=NULL;
}

void insertBegin(int x){
node *newItem=new node();
newItem->val=x;
newItem->next=head;
head=newItem;
}
void insertLast(int y){
    node *newItem=new node();
    if(head==NULL){
       insertBegin(y);
    }else{
     newItem->val=y;
node *temp=head;
while(temp->next!=NULL){
    temp=temp->next;
}
temp->next=newItem;
newItem->next=NULL;
}
}
void insertAfter(int tar,int x){
    /* node *newItem=new node();


    newItem->val=x;
    node *temp=head;
    while(temp!=NULL){
        if(temp->val==tar){
            temp=temp->next;
        }
    }
    node *temp1=temp->next;
    temp->next=newItem;
    newItem->next=temp1;
*/
}

void display(){
node *temp=head;
while(temp!=NULL){
        cout<<temp->val<<"->";
    temp=temp->next;
}
cout<<""<<endl;
}
