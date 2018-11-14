#include<iostream>
using namespace std;
int main()
{
    int i=2,n;
    cin>>n;
      while(i<=n){
            int j=2;
         while(j<=i-1){
                if(i%j==0){
                    break;
                }
                j=j+1;
      }
      if(i==j){
        cout<<i<<" ";
      }
      i=i+1;
      }


}

