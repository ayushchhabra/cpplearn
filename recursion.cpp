#include<iostream>
using namespace std;
 char a[][10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
void printword(int x){
   if(x==0){
    return;
   }
   printword(x/10);
    int last=x%10;
 cout<<a[last]<<" ";

}
int main(){
    int x,last;
    cin>>x;
    printword(x);
    cout<<endl;



}
