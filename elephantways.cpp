#include<iostream>
using namespace std;
int elephantways(int n,int m){
    if(n==0 && m==0){
        return 1;
    }

int ans=0;
for(int k=1;k<=n;k++){
    ans+=elephantways(n-k,m);
}
for(int k=1;k<=m;k++){
    ans+=elephantways(n,m-k);
}
return ans;

}

int main(){
    int n,m;
    cin>>n>>m;
    cout<<elephantways(n,m);
return 0;
}

