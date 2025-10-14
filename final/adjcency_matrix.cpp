#include<iostream>
#define v 6
using namespace std;

int arr[v][v];

void initlaze(){
for(int i=0;i<v;i++){
    for(int j=0;j<v;j++){
        arr[i][j]=0;
    }
}
}



void display(){
for(int i=0;i<v;i++){
    for(int j=0;j<v;j++){
       cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
}
void addEdge(int src,int des){
        arr[src][des]=1;
        arr[des][src]=1;
}


int  main(){
    initlaze();
      addEdge(0,1);
    addEdge(0,3);
    addEdge(1,2);
    addEdge(1,3);
    addEdge(2,4);
    addEdge(2,6);
    addEdge(4,5);
    addEdge(4,6);
    display();  

}