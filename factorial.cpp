#include<iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=n;i>=1;i--){
       fact=fact*i;
    }
    return fact;
}
int ncr(int n,int r){
 int d=factorial(n)/(factorial(r)*factorial(n-r));
return d;

}
int main(){
    int n,r;
    cin>>n>>r;
    cout<<factorial(n)<<endl;
    cout<<ncr(n,r)<<endl;



}
