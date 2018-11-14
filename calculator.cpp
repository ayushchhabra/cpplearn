#include <iostream>
using namespace std;
int main() {
    int n1,n2,n3;
   char ch;
   cin>>ch;
   while( ch!='x'&&ch!='X'){
       if (ch='+'){
           int n1,n2,n3;
           cin<<n1<<n2;
           n3=n1+n2;
           cout>>n3<<endl;
       }
       else if (ch='-'){
           int n1,n2,n3;
           cin>>n1>>n2;
           n3=n1-n2;
           cout<<n3<<endl;
       }
       else if(ch='*'){
            int n1,n2,n3;
           cin>>n1>>n2;
           n3=n1*n2;
           cout<<n3<<endl;
       }
       else if (ch='/'){
            int n1,n2,n3;
           cin>>n1>>n2;
           n3=n1/n2;
           cout<<n3<<endl;
       }
       else if (ch='%'){
            int n1,n2,n3;
           cin>>n1>>n2;
           n3=n1%n2;
           cout<<n3<<endl;
       }
       else if (ch='x'&&ch='X'){
           break;
       }
       else{
           cout<<"INVALID OPERATION.TRY AGAIN";
       }
   }
