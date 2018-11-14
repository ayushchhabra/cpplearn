#include <iostream>
using namespace std;
int main() {
    int i,j,val;
    int n;
    cin>>n;
    for(i=1;i<=n;i++){
        val=1;
        for(j=1;j<=i;j++){
            cout<<val;
    }
    val=val+1;
    }
    return 0;
}
