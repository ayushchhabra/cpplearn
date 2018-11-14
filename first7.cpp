#include<iostream>
using namespace std;
int first7(int *a,int n,int i)
{
    if(i==n){
        return -1;
    }
    if (a[i]==7){
        return i;
    }
  return first7(a,n,i+1)
}
int main(){
    int x;
    int a[]={1,2,7,6,8,7,9,5,7};
    int n=sizeof(a)/sizeof(int);
    int ans= first7(a,n,0);
    if (ans==-1){
        cout<<"not found";
    }
    else {
        cout<<"element found at"<<ans<<endl;
    }
    return 0;


}







