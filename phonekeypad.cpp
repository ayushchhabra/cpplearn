#include<iostream>
using namespace std;
string s[10]={" "," ","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
void keypad(char *in,int i,int j,char*out){
    if(in[i]=='\0'){
        out[j]='\0';
        cout<<out<<endl;
        return; // added this
    }
    //recursive case
    int digit=in[i]-'0';
    for(int k=0;s[digit][k]!='\0';k++){
        out[j]=s[digit][k];
        keypad(in,i+1,j+1,out);
    }
return;  //comment this
}
int main(){
    char in[100];
    char out[100];
    cin>>in;

    keypad(in,0,0,out);


    return 0;





}


