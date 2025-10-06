#include<iostream>
#define capacity 5
using namespace std;
int stack[capacity],top=-1;

void push(int n){
    if(top<capacity-1){
        top++;
        stack[top]=n;
        cout<<"the number pushed successfully"<<endl;
    }else{
        cout<<"stack memory full"<<endl;
          cout<<"pop any number from stack!!!!!!!"<<endl;
        
    }
}
void pop(){
    if(top>0){
        int num=stack[top];
        top--;
        cout<<"the poped element is="<<num<<endl;
    }

}

int pick(){
  if(top==-1){
    cout<<"the stack is empty"<<endl;

  }else{
     return stack[top];
  }
}
void print(){
    for(int i=0;i<=top;i++){
        cout<<stack[i]<<"->";
    }
    cout<<endl;
}


void menu(){
    cout<<"1)push "<<endl;
    cout<<"2)pop "<<endl;
    cout<<"3)pick "<<endl;
    cout<<"4)print "<<endl;
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
        push(n);
      }else if(c==2){
        pop();
      }else if(c==3){
       cout<< pick()<<endl;
      }
      else if(c==4){
        print();
      }else if(c==0){
        break;
      }
    }
    
}