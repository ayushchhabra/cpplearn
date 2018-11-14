#include<iostream>

using namespace std;

class node{
public:
    int data;
    node* next;
    node(int d):data(d),next(NULL){
    }
};

class linkedlist{
public:
    node* head;
    node* tail;

    linkedlist(){
    head=tail=NULL;
    }

    void insertatfront(int data){
        if(head==NULL){
            node* n=new node(data);
            n->next=head;
            head=tail=n;
        }
        else{
                node* n=new node(data);
                n->next=head;
                head=n;
        }

    }
    void insertatend(int data){
        if(head==NULL){
        node* n=new node(data);
        head=tail=n;
        }
        else{
            node* n=new node(data);
            tail->next=n;
            tail=n;
        }
    }
    void insertatmid(int data,int pos){
        if(pos==0){
            insertatfront(data);
        }
        else if (pos>length()){
        insertatend(data);
        }
        else{
            int jump=1;
            node* temp=head;
            while(jump<(pos-1)){
                temp=temp->next;
                jump++;
            }
            node* n=new node(data);
            n->next=temp->next;
            temp->next=n;
        }
    }

    int length(){
    node* temp=head;
        int count=0;
    while(temp!=NULL){
            count++;
    }
    return count;

          }
    void print(){
        node* temp=head;

        while(temp!=NULL){
            cout<<temp->data<<"-->";
            temp=temp->next;
        }
        cout<<endl;
    }
    node* recursivesearch(node* head,int key){
        //base case
        if(head==NULL){
            return NULL;
        }
        else if(head->data){
            return head;
        }
        return recursivesearch(head->next,key);u
    }

};

int main(){
    linkedlist l;
    for(int i=0;i<10;i++){
            l.insertatfront(i);
    }
    l.insertatend(10);
    l.insertatend(11);
    cout<<l.length();
    l.insertatmid(12,4);


    l.print();
    return 0;
}
