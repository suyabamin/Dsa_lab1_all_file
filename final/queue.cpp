#include<iostream>
#define capacity 5
using namespace std;
int q[capacity],front=0,rear=-1,current_size=0;

void enque(int vaue){
if(current_size==capacity){
    cout<<"the queue is full"<<endl;
}else{
    rear=(rear+1)%capacity;
    q[rear]=vaue;
    current_size++;
}
}

void deque(){
    if(current_size==0){
       cout<<"queue is empty";
    }else{
        q[front]=0;
        front=(front+1)%capacity;
        current_size--;
    }
}

void display(){
    for(int i=0;i<current_size;i++){
       int index=(front+i)%capacity;
       cout<<q[index]<<"->";
    }
}

int main(){
    enque(10);
    enque(20);
    enque(30);
    enque(40);
    enque(50);
    enque(60);
    enque(70);
    display();
    deque();
    cout<<endl;
    display();
}
