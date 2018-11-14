#include<iostream>
#include<stack>
#include<queue>
using namespace std;

int main(){
    queue<int> q;
    for(int i=0;i<11;i++){
        q.push(i);
    }
    stack<int> s;
     while(!q.empty()){
            int top=q.front();
            s.push(top);
            q.pop();

    }
    while(!s.empty()){
        int top=s.top();
        q.push(top);
        s.pop();
    }
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }

    return 0;
}
