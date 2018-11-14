#include<iostream>
using namespace std;

int nstairs(int n){
    if(n==0){
        return 1;
    }
    if (n<0){
        return 0;
    }
    return nstairs(n-1)+nstairs(n-2)+nstairs(n-3) ;

}
int main(){
    int n;
    cin>>n;
    cout<<nstairs(n)<<endl;
    return 0;

}
