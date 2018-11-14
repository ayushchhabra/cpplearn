#include<iostream>
#include<vector>
using namespace std;

//template <typename T>
class Stack{
    vector<int> v;
public:
    void push(int data){
    v.push_back(data);
    }

    void pop(){
    v.pop_back();
    }

    int top(){
    return v[v.size()-1];
    }

    bool empty(){
        return v.size()==0;
    }

};

int main(){

Stack s;
for(int i=0;i<=10;i++){
    s.push(i);
}

 while (!s.empty()){
    cout<<s.top()<<endl;
    s.pop();
 }

 return 0;
}
