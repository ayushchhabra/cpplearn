#include<iostream>
using namespace std;
int multiply(int n1,int n2){
    if ( n2==0){
        return 0;
    }
  int ans=n1+multiply(n1,n2-1);
  return ans;
}



int main(){
    int n1,n2;
    cin>>n1>>n2;
    cout<<multiply(n1,n2)<<endl;


    return 0;
}
