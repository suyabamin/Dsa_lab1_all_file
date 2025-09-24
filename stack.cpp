#include<iostream>
#define MAX_SIZE 5
using namespace std;
int stack[MAX_SIZE],top=-1;
void manu(){
    cout<<"1)push-"<<endl;
    cout<<"2)pop-"<<endl;
    cout<<"3)pic-"<<endl;
    cout<<"4)print-"<<endl;
     cout<<"0)exit-"<<endl;
}
void   push(int v){
    if(top+1==MAX_SIZE){
      cout<<"stack over flow";  
    }else{
        top++;
        stack[top]=v;
    }
} 
int  pop(){
    if(top==-1){
        cout<<"stack is empty";
    }else{
        int temp=stack[top];
        top--;
        return temp;
    }
}

int pik(){
    if(top==-1){
        cout<<"stack is empty";
    }else{
        return stack[top];
    }
  
}
void print(){
    if(top==-1){
        cout<<"empty";
    }
    for(int i=0;i<top;i++){
        cout<<stack[i]<<endl;
    }
}

int main(){
    while (1)
    {
    
cout<<"----choice----"<<endl;
manu();
cout<<"enter any value=";
int c;
cin>>c;
if(c==1){
    int v;
    cout<<"enter any value-";
    cin>>v;
    push(v);
}else if(c==4){
    print();
}else if(c==0){
   break;
}

}
}
