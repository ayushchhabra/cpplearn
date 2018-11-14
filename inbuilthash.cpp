#include<iostream>
#include<unordered_map>
#include<map>
using namespace std;

int main(){
    unordered_map<string,int> h;

    h["Mango"]=100; //insertion
    h["Mango"]=20; //updation
    cout<<h["Mango"]<<endl;  //searching

    pair<string,int> p("PineApple",30);
    h.insert(p);
    h.insert(make_pair("Apple",300));

    string f="Mango";
    if(h.count(f)){
            cout<<"Price of "<<f<<" is "<<h[f]<<endl;
    }
    else{
        cout<<"Fruit Doesnot exist"<<endl;
    }

    for(auto node:h){
        cout<<node.first<<" , "<<node.second<<endl;
    }
    return 0;
}
