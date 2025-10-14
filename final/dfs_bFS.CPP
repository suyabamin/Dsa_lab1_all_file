#include<iostream>
#define v 7
#include<stack>
#include<queue>
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

void DFS(){
   bool visited[v]={false};
   stack<int>st;
   for(int i=0;i<v;i++){
    if(!visited[i]){
        st.push(i);
        while (!st.empty())
        {
           int vertex=st.top();
           st.pop();
           if(!visited[vertex]){
            visited[vertex]=true;
           cout<<vertex<<" ";
           for(int j=v-1;j>=0;j--){
            if(arr[vertex][j]==1&&!visited[j]){
                st.push(j);
            }
           }
        }
        }
        
    }
   }
   cout<<endl;
}
void BFS(){
   bool visited[v]={false};
   queue<int>q;
   for(int i=0;i<v;i++){
    if(!visited[i]){
        q.push(i);
        visited[i]=true;
        while (!q.empty())
        {
           int vartex=q.front();
           q.pop();
           cout<<vartex<<" ";
           for(int j=0;j<v;j++){
            if(arr[vartex][j]==1&&!visited[j]){
                q.push(j);
                visited[j]=true;
            }
           }
        }
        
    }
   }
   cout<<endl;
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
    cout<<"dfs===";
    DFS(); 
     cout<<"Bfs===";
    BFS(); 

}