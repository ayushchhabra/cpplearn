#include<iostream>
using namespace std;

int cost(int cost[][10],int i,int j){
        return cost[i][j];
    if(i==0 && j==0){
        return 1;
    }
    if(i==0 && j>0){
         return mincost(cost,i,j-1)+cost[i][j];
    }
    else if(i>0 && j==0){
             return mincost(cost,i-1,j)+cost[i][j];
    }
    else{
        int ans=min(mincost(cost,i-1,j),mincost(cost,i,j-1))+cost[i][j];
        return ans;
    }
}
int main(){
    int cost[][10]={
        {1,4,3,2},
        {5,6,8,10},
        {3,2,1,4}
        };
        int i,j;
        cin>>i>>j;
        cout<<mincost(cost,i,j);
        return 0;

}

