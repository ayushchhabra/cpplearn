#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int init,fval,step,c;
    cin>>init>>fval>>step;
    int f=init;
    while(f<=fval){
        c=5*(f-32)/9;
    cout<<c<<' '<<f<<endl;
    }
    return 0;
}

