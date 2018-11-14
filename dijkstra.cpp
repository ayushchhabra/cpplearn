#include<iostream>
#include<set>
#include<unordered_map>
#include<climits>
using namespace std;

template<typename T>
class Graph{
    unordered_map<T,list<pair<T,int> > >h;
public:
    void addedge(T u,T v,int d,bool bidir=true){
        h[u].push_back(make_pair(v,d));
        if(bidir){
            h[v].push_back(make_pair(u,d));
        }
    }
    void print(){
        for(auto node:h){
            cout<<node.first<<"-->";
            for(auto children:node.second){
                cout<<"("<<children.first<<","<<children.second<<")";
            }
            cout<<endl;
        }
    }


};
int main(){
    Graph<string> g;
    g.addedge("Amritsar","Agra",1);
    g.addedge("Amritsar","Jaipur",4);
    g.addedge("Delhi","Jaipur",2);
    g.addedge("Delhi","Agra",1);
    g.addedge("Bhopal","Agra",2);
    g.addedge("Bhopal","Mumbai",3);
    g.addedge("Mumbai","Jaipur",5);

    g.print();
    return 0;
}
