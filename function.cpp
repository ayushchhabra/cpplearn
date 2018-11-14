#include<iostream>
using namespace std;
bool checkprime (int n){
for(int i=2;i<n;i++){
    if(n%i==0){
        return true;
    }
    return false;
    }
}
void generateprime(int n){
    for(int i=2;i<=n;i++){
        if(checkprime(n)){
            cout<<i<<"";
        }
    }
}


int main(){
    int n;
    cin>>n;
    if(checkprime(n)){
        cout<<"prime"<<endl;
    }
        else {
            cout<<"notprime"<<endl;

}
generateprime(n);

}
