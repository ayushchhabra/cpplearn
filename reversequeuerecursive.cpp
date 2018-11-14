#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void reversequeue(queue<int> &q){
    //base case
    if(q.empty()){
        return;
    }
    //recursive case
    int temp=q.front();
    q.pop();
    reversequeue(q);
    q.push(temp);
}

int main(){
    queue<int> q;
    for(int i=0;i<11;i++){
        q.push(i);
    }
    reversequeue(q);
      while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;
}

