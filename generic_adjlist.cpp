
#include<iostream>
#include<unordered_map>
#include<list>
#include<queue>
#include<map>
using namespace std;


template <typename T>
class Graph{
    unordered_map<T,list<T> >adjlist;
public:
    void addedge(T u,T v,bool bidir=true){
        adjlist[u].push_back(v);
        if(bidir){
        adjlist[v].push_back(u);
    }
    }
    void print(){
        for(auto node:adjlist){
            cout<<node.first<<"-->";
            for(auto neighbour:node.second){
                cout<<neighbour<<",";
            }
            cout<<endl;
        }
    }
    void bfs(T src){
    queue<T> q;
    map<T,bool> visited;
    q.push(src);
    visited[src]=true;


    while(!q.empty()){
            T node=q.front();
            cout<<node<<" ";
            q.pop();
            for(auto neighbour:adjlist[node]){
                if(!visited[neighbour]){
                    q.push(neighbour);
                    visited[neighbour]=true;
                }
            }
    }
    cout<<endl;
    }
    int sssp(T src,T des){
        queue<T> q;
        map<T,int> dist;
        map<T,T> parent;

        for(auto node:adjlist){
                dist[node.first]=INT_MAX;
        }
        q.push(src);
        dist[src]=0;
        parent[src]=src;

        while(!q.empty()){
            T node=q.front();
            q.pop();

            for(auto children:adjlist[node]){
                if(dist[children]==INT_MAX){
                    parent[children]=node;
                    dist[children]=dist[node]+1;
                    q.push(children);
                }
            }
        }
        for(auto node:adjlist){
                cout<<"Dist of "<<node.first<<"from "<<src<<"to"<<des<<" is "<<dist[node.first]<<endl;

        }
        return dist[des];
    }

};
int main(){
    Graph<string> g;

    g.addedge("Putin","Trump");
    g.addedge("Putin","Modi");
    g.addedge("Putin","Pope");
    g.addedge("Modi","Trump",true);
    g.addedge("Modi","Yogi",true);
    g.addedge("Yogi","Prabhu");
    g.addedge("Prabhu","Modi");
  //  g.bfs("Modi");

   // g.print();
   g.sssp("Modi","Prabhu");
    return 0;
}
