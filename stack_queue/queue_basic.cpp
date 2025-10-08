#include<iostream>
#define capacity 5
using namespace std;
int queue[capacity],totalItem=0,rear=-1,front=0;


bool isFull(){
    if(totalItem==capacity){
       return true;
    }
    return false;
}
bool isEmpty(){
    if(totalItem==0){
        return true;
    }
    return false;
}

void enque(int n){
    if(isFull()){
        cout<<"the queue  is full";
        return;
    }
   rear=(rear+1)%capacity;
   queue[rear]=n;
   cout<<"enqueued successfully";
   totalItem++;
}

void deque(){
    if(isEmpty()){
        cout<<"the queue is empty and push any number"<<endl;
        return;
    }
    int fromtItem=queue[front];
    queue[front]=0;
    front=(front+1)%capacity;
    totalItem--;
}


void print(){
   for(int i=0;i<totalItem;i++){
    int index=(front+i)%capacity;
    cout<<queue[index]<<"->";
   }
   cout<<"NULL"<<endl;
}


void menu(){
    cout<<"1)enque "<<endl;
    cout<<"2)deque "<<endl;
    cout<<"3)print "<<endl;
    cout<<"0)break "<<endl;
    
}
int main(){
    cout<<"--------stack element------------"<<endl;
    
    while (1)
    {
          menu();
    cout<<"enter any choice-";
    int c;
    cin>>c;
      if(c==1){
        cout<<"enter number-";
        int n;
        cin>>n;
        enque(n);
      }else if(c==2){
        deque();
      }else if(c==3){
       print();
      }
        else if(c==0){
        break;
      }
    }
    
}