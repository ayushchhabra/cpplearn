#include <iostream>
using namespace std;
int main(){
    int  n,rem;
    cin>>n;
    int rev=0;
    while (n>0){
        rem=n%10;
        n=n/10;
        rev=rev*10+rem;
    }
    cout<<rev<<endl;
    return 0;
}
