#include<iostream>
#define capacity 5
using namespace std;
int stack[capacity],top=-1;

void push(int v){
    if(top<capacity-1){
        top++;
        stack[top]=v;
    }else{
        cout<<"stack is full"<<endl;
    }

}

void pop(){
    if(top<0){
    int n=stack[top];
    top--;
    cout<<"poped element is-"<<n<<endl;
    }
}

void print(){
    for(int i=0;i<=top;i++){
        cout<<stack[i]<<"->";
    }
}

int main(){

   push(10);
   push(20);
   push(30);
   push(40);
   push(50);
    pop();
     push(60);
   print();
    
}