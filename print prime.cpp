#include <iostream>
using namespace std;
int main(){
    int n;
    int i,j;
    cin>>n;
    for(i=2;i<=n-1;i++){
        for(j=2;j<i-1;j++){
            if(i%j==0){
                break;
            }
            if(i==j){
                cout<<j<<"";
            }
        }
    }
    return 0;
}
