#include<iostream>
using namespace std;
int top=-1;
int stack[100];

void push(int x,int max_size){
      if(top>=max_size-1){
       cout<<"stack is overflow"<<endl;
       return;
      }
       top++;
        stack[top]=x;
      cout<<"size="<<top+1;
      cout<<"items-";
      for(int i=0;i<=top;i++){
         cout<<stack[i]<<" ";
          if (i != top) cout << " ";
      }
      cout<<endl;
}

void  pop(){
     if (top == -1) {                     // empty
        cout << "size=0 items=NULL" << endl;
        return;
    }
    top--;

    if (top == -1)
        cout << "size=0 items=NULL" << endl;
    else {
        cout << "size=" << top + 1 << " items=";
        for (int i = 0; i <= top; i++) {
            cout << stack[i];
            if (i != top) cout << " ";
        }
        cout << endl;
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
            pop();
        }
     }
}