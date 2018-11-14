#include<iostream>
#include "stack.h"
using namespace std;

int main(){

    stack <char>s;

    s.push('A');
    s.push('B');
    s.push('C');
    s.push('D');

    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;

}
