#include<iostream>
using namespace std;
int top=-1;
int stack[100];

void push(int x,int max_size){
      if(top>max_size-1){
       cout<<"stack is overflow"<<endl;
      }
       top++;
        stack[top]=x;
      cout<<"size="<<top+1;
      cout<<"items-";
      for(int i=0;i<=top;i++){
         cout<<stack[i]<<" ";
      }
      cout<<endl;
}

void  deque(int max_size){
    top--;
    if(top>0){
       // top--;
         cout<<"size="<<top+1;
      cout<<"items-";
      for(int i=0;i<=top;i++){
         cout<<stack[i]<<" ";
      }
      cout<<endl;

    }else{
         // top--;
        cout<<"size-"<<top+1;
        cout<<"items=NULL";
        cout<<endl;
    }
   
}

int main(){
    int c;
    cout<<"enter size (N)-";
    cin>>c;
     stack[c];
    int T;
    cout<<"Enter operation(T)-";
    cin>>T;
     for(int i=0;i<T;i++){
        int ch;
        cout<<"enter any choice(1/2)-";
        cin>>ch;
        if(ch==1){
            int x;
            cout<<"enter any value-";
            cin>>x;
            push(x,c);
        }else if(ch==2){
            deque(c);
        }
     }
}