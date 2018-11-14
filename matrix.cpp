#include<iostream>
using namespace std;
int main(){
    int a[100][100];
    int i,j;
    int r,c;
    cout<<"enter no. of rows and column";
    cin>>r>>c;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    int b;
    cin>>b;
    for(i=0;i<r;i++){
            for(j=0;j<c;j++){
            if (a[i][j]==b){
                cout<<"found at location"<<i<<" "<<j<<endl;
                break;
            }

        }
        if (j!=c){
            break;
        }
        return 0;
}







}
