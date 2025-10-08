#include<iostream>
#define max_size 5
using namespace std;
int q[max_size],front=0,rear=-1,total_item=0;


void enque(int n){

    if(max_size==rear){
        cout<<"queue overflow";
        return ;
    }
    rear=(rear+1)%max_size;
    q[rear]=n;
    total_item++;
}
void print(){
    for(int i=0;i<total_item;i++){
        cout<<q[i]<<"->";
    }
}


int main(){
    enque(10);
    enque(20);
    enque(30);
    enque(40);
    enque(50);
     enque(50);
    print();

}