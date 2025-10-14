#include<iostream>
#define capacity 5
using namespace std;

int stack[capacity],top=-1;
void push(int value){
    if(top<capacity-1){
        top++;
        stack[top]=value;
    }else{
        cout<<"the stack is empty";
    }
}

void pop(){
    if(top>0){
        top--;
    }
}
  void display(){
        for(int i=0;i<=top;i++){
          cout<<stack[i]<<endl;
        }
    }

int main(){
   push(10);
   push(20);
   push(30);
   push(40);
   push(50);
    push(60);
   display();
   cout<<"after pop---="<<endl;
   pop();
    display();
}