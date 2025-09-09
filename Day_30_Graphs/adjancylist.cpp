#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;

class Graph{
    public:
    unordered_map<int,list<int>> adj;

    void addEdge(int u,int v,bool direction){
        adj[u].push_back(v);
        if(direction==0){
            adj[v].push_back(u);
        }

    }
    void print(){
        for(auto i:adj){
            cout<<i.first<<"->";
            for(auto j:i.second){
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }
};
int main(){
        Graph g;

        int u;
        int v;
        cout<<"Enter the number of Nodes and then edges:";
        cin>>u>>v;
        for(int i=0;i<v;i++){
            int a,b;
            cout<<"Enter edge "<<i+1<<":";
            cin>>a>>b;
            g.addEdge(a,b,0);
            
        }

        g.print();


    return 0;
}