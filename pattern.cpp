#include<iostream>
using namespace std;
int main(){
 int i,j,n,val;
 cin>>n;
 for(i=1;i<=n;i++){

        if(i%2==0){
            val=0;
        }
        else{
            val=1;
        }
    for(j=1;j<=i;j++){

       cout<<val;
       val=1-val;
      // j=j+1;

    }
    `
    cout<<endl;
    //i=i+1;
 }


}





