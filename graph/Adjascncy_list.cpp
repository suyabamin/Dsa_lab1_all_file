#include<iostream>
#include<vector>
#define v 6
using namespace std;
vector<int>adj[v];

void addEdge(int src,int des){
    adj[src].push_back(des);
}
void display(){
    for(int i=0;i<v;i++){
        cout<<"vertex  "<<i<<"->";
        for(int j=0;j<adj[i].size();j++){
            cout<<adj[i][j]<<"->";
        }
          cout<<endl;
    }
}

int main(){
   
    addEdge(0,1);
    addEdge(0,4);
    addEdge(1,3);
    addEdge(1,2);
    addEdge(1,4);
    addEdge(3,4);
    addEdge(3,5);
   display();
}





/*#include<iostream>
#include<vector>
#define v 6
using namespace std;
vector<int>adj[v];

void addEdge(int src,int des){
    adj[src].push_back(des);

}
void Print(){
    for(int i=0;i<v;i++){
        cout<<"vertx--"<<i<<"->";
        for(int j=0;j<adj[i].size();j++){
            cout<<adj[i][j]<<"->";
        }
        cout<<endl;
    }
}


int main(){
    addEdge(0,1);
    addEdge(0,4);
    addEdge(1,3);
    addEdge(1,2);
    addEdge(1,4);
    addEdge(3,4);
    addEdge(3,5);
    Print();
  
}


*/