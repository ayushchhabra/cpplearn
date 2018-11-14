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
    for(int col=0;col<c;col++){
        if(col%2==0){
            for(int row=0;row<r;row++){
                cout<<a[row][col]<<" ";
            }
            }
            else {
                for (int row=r-1;r>0;r--){
                    cout<<a[row][col]<<" ";
                }
            }
        }
        return 0;


    }
