#include<iostream>
using namespace std;
int arr(int *a,int n){
    int sum=0;
 for(int i=0;i<n;i++){
        sum=sum+*(a+i);

 }
 return  sum;
}
int main(){
int a[100],n;
cin>>n;
for(int i=0;i<n;i++){
    cin>>a[i];
}
cout<<arr(a,n)<<endl;
return 0;
}
