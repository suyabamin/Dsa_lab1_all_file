#include<iostream>
using namespace std;
struct node{
node*next;
int value;

};


node* head=NULL;
/// @brief list 2
struct node1{
node1*next;
int value;

};
node1*head1=NULL;


//print
void print(){
  cout<<"your link lest is-----"<<endl;
node *temp=head;
while(temp!=NULL){
    cout<<temp->value<<"->";
    temp=temp->next;
}
cout<<" "<<endl;
}

void insertbegain(int x){
node*newIetm=new node();
newIetm->value=x;
newIetm->next=head;
head=newIetm;

}
void  insertlast(int x){
node*newItem=new node();
if(head==NULL){
  insertbegain(x);
}else{
  node*temp=head;
  newItem->value=x;
while (temp->next!=NULL)
{
  temp=temp->next;
}
temp->next=newItem;
newItem->next=NULL;

}  /*  
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

} */
}
void insertAfter(int n,int x){
node*newItem=new node();
node*temp=head;
if(head==NULL){
  insertbegain(x);
}else{
  while (temp!=NULL&& temp->value!=n){
    temp=temp->next;

  }
  newItem->value=x;
  newItem->next=temp->next;
  temp->next=newItem;
  
}


}
void deleteBegain(){

if(head==NULL){
  cout<<"the list is empty"<<endl;
  return;
}else{
node*temp=head;
head=head->next;
delete(temp);

}


/*
    if(head==NULL){
      cout<<"link lest is empty"<<endl;
     return;
    }else{
   node*temp=head;
   head=head->next;
   delete(temp);
    } */
}

void  deleteLast(){

node*temp=head;
node*prev=NULL;
if(head==NULL){
  return;
}else{
  while (temp->next!=NULL)
  {
    prev=temp;
    temp=temp->next;
  }
  
  if(prev==NULL){
    return;
  }else{
    prev->next=NULL;
  }
  
}
/*
  if(head==NULL){
    cout<<"link lest is empty"<<endl;
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
  */
}

void insert_in_position(int n,int x){

  if(n==1){
    insertbegain(x);
  }
  node*newItem=new node();
  node*temp=head;
  for(int i=0;i<n-1;i++){
    temp=temp->next;
  }
  newItem->value=x;
  newItem->next=temp->next;
  temp->next=newItem;
  /*
  if(n==1){
    insertbegain(x);
  }
  node*newItem=new node();
  node*temp=head;
  for(int i=1;i<n-1;i++){
     temp=temp->next;
  }
  newItem->value=x;
   newItem->next=temp->next;
   temp->next=newItem;
   */
}void delete_in_position(int n){
  if(n==1){
   deleteBegain();
  }
  node*temp=head;
  node*prev=NULL;
  for(int i=0;i<n-2;i++){
    temp=temp->next;
  }
  prev=temp->next;
  temp->next=temp->next->next;
  delete(prev);
  
}
void scarch(int n){
  node*temp=head;
  int index=1;
  while (temp!=NULL)
  {
    if(temp->value==n){
      cout<<"found "<<n<<"in "<<index<<"th position"<<endl;
    }
    temp=temp->next;
    index++;
  }


}

void reversePrint(){

   node*temp=head;
    node*prev=NULL;
    node*after=NULL;
  while (temp!=NULL)
  {
    after=temp->next;
    temp->next=prev;
    prev=temp;
    temp=after;
  }
  head=prev;

}
/// @brief /////////
void count(){
node*temp=head;
int count=0;
while (temp!=NULL)
{
  count++;
  temp=temp->next;
}
cout<<"total node-"<<count<<endl;

}

int  lenth(){
  node*temp=head;
  int count=0;
  while (temp!=NULL)
  {
    temp=temp->next;
    count++;
  }
  return count;
}

void mid(){
  node *temp=head;
  int l=lenth();
  int mid=(l/2);
  for(int i=0;i<mid;i++){
    temp=temp->next;
  }
  cout<<"mdi"<<temp->value<<endl;
  
}
void mid_way_2(){
     node*first=head;
     node*slow=head;
     while (first->next!=NULL&&first!=NULL)
     {
      first=first->next->next;
      slow=slow->next;
     }

     cout<<"the mid value is--"<<slow->value<<endl;
     
 }

void bubbol_sort(){
  int n=lenth();
  for(int i=0;i<n-1;i++){
    node*temp=head;
    for(int j=0;j<n-i-1;j++){

        if(temp->value>temp->next->value){
            int temp1= temp->value;
            temp->value=temp->next->value;
            temp->next->value=temp1;
            
        }
        temp=temp->next;
    }
}


}

void cnovert_list_to_array(){
  int n=lenth();
  int arr[n];
  node*temp=head;
  for(int i=0;i<n;i++){
    arr[i]=temp->value;
    temp=temp->next;
  }
  cout<<"array is-";
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  
}
void remove_odd_index(){
  node*temp=head;
  int n=lenth();
for (int i=0;i<n&&temp!=NULL&&temp->next!=NULL;i++)
  {
    if(i%2==0){
     node*temp1=temp->next;
     temp->next=temp1->next;
     delete(temp1);
    }
   temp=temp->next;
    
  }
}
void remove_even_index(){
  node*temp=head;
  int n=lenth();
for (int i=0;i<n&&temp!=NULL&&temp->next!=NULL;i++)
  {
    if(i%2!=0){
     node*temp1=temp->next;
     temp->next=temp1->next;
     delete(temp1);
    }
   temp=temp->next;
    
  }
}
  
  

  void Duplicate_Removal() {
    node* current = head;

    while (current != NULL) {
        node* runner = current;
        while (runner->next != NULL) {
            if (runner->next->value == current->value) {
                // duplicate found, remove it
                node* temp = runner->next;
                runner->next = runner->next->next;
                delete temp;
            } else {
                runner = runner->next;
            }
        }
        current = current->next;
    }
}


void manue(){
  cout<<"------------------enter any choice-----------------------"<<endl;
  cout<<"1)insert first"<<endl;
   cout<<"2)insert last"<<endl;
    cout<<"3)delete begain"<<endl;
     cout<<"4)delete last"<<endl;
      cout<<"5)insert n th---"<<endl;
      cout<<"6)print"<<endl;
       cout<<"7)insert in position"<<endl;
      cout<<"8)delete in position value"<<endl;
      cout<<"9)scarch"<<endl;
        cout<<"10)reverse printn"<<endl;
        cout<<"11)counte node"<<endl;
         cout<<"12)mid node"<<endl;
          cout<<"13)Lenth"<<endl;
          cout<<"14)mid way 2"<<endl;
            cout<<"15)BUbbol sort"<<endl;
              cout<<"16)convert liat to array-"<<endl;
               cout<<"17)Merge Sorted Lists"<<endl;
                  cout<<"18)remove odd index"<<endl; 
                   cout<<"19)remove even index"<<endl; 
                   cout<<"20)Duplicate Removal"<<endl; 
                cout<<"0)Exit"<<endl;
                 
}





///link lest 2

void insertbegain1(int x){
node1*newIetm=new node1();
newIetm->value=x;
newIetm->next=head1;
head1=newIetm;

}
void  insertlast1(int x){
node1*newItem=new node1();
if(head==NULL){
  insertbegain(x);
}else{
  node1*temp=head1;
  newItem->value=x;
while (temp->next!=NULL)
{
  temp=temp->next;
}
temp->next=newItem;
newItem->next=NULL;

}  
}

void marge_and_sort(){
  node*temp=head;
  node1*temp1=head1;
  while (temp->next!=NULL)
  {
    temp=temp->next;
  }
 while (temp1!=NULL)
 {
  insertlast(temp1->value);
  temp1=temp1->next;
 }
 
}


int link_Lest2(){
    insertbegain1(2);
    insertlast1(4);
    insertlast1(6);
}

int main(){

  while (1)
  {

  manue();
  int n;
  cout<<"enter any choice------";
  cin>>n;
  if(n==1){
    int k;
    cout<<"enter the value you want to insert----";
    cin>>k;
    insertbegain(k);
  }else if(n==2){
    int k;
    cout<<"enter the value you want to insert----";
    cin>>k;
    insertlast(k);
  }else if(n==3){

     deleteBegain();
  }else if(n==4){

     deleteLast();
  }

  else if(n==5){
    int k,l;
    cout<<"enter the value you want to after insert----";
    cin>>k;
    cout<<"enter the value you want to after insert----";
    cin>>l;
   insertAfter(k,l);
  }else if(n==6){
     print();

  }else if(n==0){
   break;

  }else if(n==7){
    int k,l;
    cout<<"enter the n----";
    cin>>k;
    cout<<"enter the value you want to after insert----";
    cin>>l;
   insert_in_position(k,l);
  }else if(n==8){
    int k,l;
    cout<<"enter the n----";
    cin>>k;

   delete_in_position(k);
  }else if(n==9){
    int k;
    cout<<"enter the value----";
    cin>>k;

  scarch(k);
  }else if(n==10){
    reversePrint();
  }else if(n==11){
   count();
  }

  else if(n==12){
    
  
   mid();

  }
  else if(n==14){
    mid_way_2();

  }
  else if(n==15){
   bubbol_sort();

  }
  else if(n==16){
   cnovert_list_to_array();

  }
  else if(n==17){
    link_Lest2();
    marge_and_sort();
    bubbol_sort();
   
  } else if(n==18){
   remove_odd_index();

  }else if(n==19){
   remove_even_index();

  }
  else if(n==20){
   Duplicate_Removal();
  }




  else{
    cout<<"invalid input";
  }

}

return 0;
}
