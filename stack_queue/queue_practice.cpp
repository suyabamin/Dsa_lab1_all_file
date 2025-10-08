#include<iostream>
#define max_size 5
using namespace std;
int q[max_size],front=0,rear=-1,current_size=0;


void enque(int n){

    if(current_size==max_size){
        cout<<"queue overflow"<<endl;
    }else{
      
    rear=(rear+1)%max_size;
    q[rear]=n;
    current_size++;
}

}

 void deque(){
   if(current_size==0){
    cout<<"the queue is under flow"<<endl;
   }else{
   int temp=q[front];
   q[front]=-1;
   front=(front+1)%max_size;
   current_size--;
 }
}


void print(){
    for(int i=0;i<max_size;i++){
        cout<<q[i]<<"->";
    }
      cout<<endl;
}


int main(){
    enque(10);
    enque(20);
    enque(30);
    enque(40);
    enque(50);
    enque(60);
    print();
    deque();
    deque();
  
    print();
}