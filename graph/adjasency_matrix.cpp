#include<iostream>
#define v 6
using namespace std;
 int arr[v][v];
 void  initialize(){
     for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            arr[i][j]=0;
        }
     }
 }

 void addEdge(int src,int des){
    arr[src][des]=1;
    arr[des][src]=1;

 }

 void  display(){
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
 }

int main(){
   
    initialize();
    addEdge(0,1);
    addEdge(0,4);
    addEdge(1,2);
    addEdge(1,3);
    addEdge(3,5);
    addEdge(4,3);
    
    display();
}