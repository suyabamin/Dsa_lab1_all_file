#include<iostream>
#define MAX_SIZE 5
using namespace std;
int queue[MAX_SIZE],front=-1,rear=-1,current_size=0;


void enque(int x){
    if(current_size==MAX_SIZE){
        cout<<"overflow"<<endl;
    }else{
        if(current_size==0)front=0;
        rear=(rear+1)%MAX_SIZE;
        queue[rear]=x;
    }

}

int  deque(){
   if(current_size==0){
        cout<<"underflow"<<endl;
    } else{
        int temp=queue[front];
        front=(front+1)%MAX_SIZE;
        return temp;
    }
    
}

void print(){
   
    for(int i=0;i<MAX_SIZE;i++){
        cout<<queue[i]<<endl;
    }
}

int main(){
    enque(10);
    enque(20);
    enque(30);
    enque(40);
    enque(50);
    enque(80);
    enque(90);
    print();
}
