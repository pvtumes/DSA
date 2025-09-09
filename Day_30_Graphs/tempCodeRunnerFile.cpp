#include<iostream>
#include<list>
#include<vector>
#include<unordered_map>
#include<queue>
#include<stack>
using namespace std;
class Graph{
    public:
    unordered_map<int,list<int>> adjList;

    void addEdge(int u,int v,bool direction){
        adjList[u].push_back(v);
        if(direction==0){
            adjList[v].push_back(u);
        }
    }
    void printadjList(){
        for(auto i :adjList){
            cout<<i.first<<"->";
            for(auto j:i.second){
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }
    void bfs(){
        unordered_map<int,bool> visited;
        for(auto i:adjList){
            visited[i.first]=false;
        }
        queue<int> q;
        vector<int>ans;

        int startNode=adjList.begin()->first;
        q.push(startNode);
        visited[startNode]=true;

        while(!q.empty()){
            int startNode=q.front();
            ans.push_back(startNode);
            q.pop();
            for(auto i:adjList[startNode]){
                if(!visited[i]){
                    q.push(i);
                    visited[i]=true;
                }
            }
        }
        cout<<endl;
        for(int i:ans){
            cout<<i<<"->";
        }
    }
    void dfs(){
        unordered_map<int, bool> visited;
        for (auto i : adjList)
        {
            visited[i.first] = false;
        }
        stack<int>stk;
        vector<int> ans;
        int startNode=adjList.begin()->first;
        visited[startNode]=true;
        stk.push(startNode);
        while(!stk.empty()){
            int startNode=stk.top();
            ans.push_back(startNode);
            stk.pop();
            for(auto i:adjList[startNode]){
                if(!visited[i]){
                    stk.push(i);
                    visited[i]=true;
                }
            }
        }
        cout << endl;
        for (int i : ans)
        {
            cout << i << "->";
        }
    }

    bool cycle_detecion(){

        unordered_map<int, bool> visited;
        unordered_map<int,int>parent;
        for (auto i : adjList)
        {
            visited[i.first] = false;
        }
        queue<int> q;
        vector<int> ans;

        int startNode = adjList.begin()->first;
        q.push(startNode);
        visited[startNode] = true;
        parent[startNode]=-1;

        while (!q.empty())
        {
            int startNode = q.front();
            ans.push_back(startNode);
            q.pop();
            for (auto i : adjList[startNode])
            {   if(visited[i] && parent[startNode]!=i){
                return true;
            }
                else if (!visited[i])
                {   
                    q.push(i);
                    visited[i] = true;
                    parent[i]=startNode;
                }
            }
        }
        return false;
    }

    bool cycle_detection_dfs(){
        unordered_map<int, bool> visited;
        unordered_map<int,int> parent;
        for (auto i : adjList)
        {
            visited[i.first] = false;
        }
        stack<int> stk;
        vector<int> ans;
        int startNode = adjList.begin()->first;
        visited[startNode] = true;
        stk.push(startNode);
        parent[startNode]=-1;
        while (!stk.empty())
        {
            int startNode = stk.top();
            ans.push_back(startNode);
            stk.pop();
            for (auto i : adjList[startNode])
            {   if(visited[i] && parent[startNode]!=i){
                return true;
            }
               else if (!visited[i])
                {
                    stk.push(i);
                    visited[i] = true;
                }
            }
        }
        


        return false;
    }
};


int main(){
    Graph g;
    cout<<"enter the number of nodes and adeges:";
    int u,v;
    cin>>u>>v;
    for(int i=0;i<v;i++){
        cout<<"enter "<<i+1<<" NUmber:";
        int a;
        int b;
        cin>>a>>b;
        g.addEdge(a,b,0);
    }
    g.printadjList();
    g.bfs();
    g.dfs();
    cout<<endl<<g.cycle_detecion();
    cout<<endl<<g.cycle_detection_dfs();
}