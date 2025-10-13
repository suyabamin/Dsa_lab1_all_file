#include<iostream>
#include<vector>
using namespace std;

void addEdge(vector<int> adj[], int src, int des)
{
    adj[src].push_back(des);
}

void display(vector<int> adj[], int V){
    for(int i=0; i<V;i++){
        cout<<"Vertex "<<i<<"->";
        for(int j=0;j<adj[i].size();j++)
            cout<<adj[i][j]<<"->";
        cout<<endl;
    }
}

int main()
{
    int V = 6;
    vector<int> adjList[V];

    addEdge(adjList,0,1);
    addEdge(adjList,0,4);
    addEdge(adjList,1,2);
    addEdge(adjList,1,3);
    addEdge(adjList,1,4);
    addEdge(adjList,3,4);
    addEdge(adjList,3,5);
    display(adjList, V);

}
