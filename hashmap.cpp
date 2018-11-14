#include<iostream>
using namespace std;

template <typename T>
class node{
public:
    string key;
    T value;
    node<T>* next;

    node(string k,T val){
        key=k;
        value=val;
        next=NULL;
    }
};

template <typename T>
class hashmap{
    node<T>** bucket;
    int cs;
    int ts;

    int hashfn(string key){
        int ans=0;
        int p=1;

        for(int i=0;key[i]!=0;i++){
            ans+=key[i]*p;
            p*=37;

            p%=ts;
            ans%=ts;
        }
        return ans;
    }

    void rehash(){
        node<T>** oldbucket=bucket;
        int oldts=ts;

        cs=0;
        ts=2*ts;
        bucket=new node<T>*[ts];

         for(int i=0;i<ts;i++){
            bucket[i]=NULL;
        }
        for(int i=0;i<oldts;i++){
            node<T>* temp=oldbucket[i];
            while(temp!=NULL){
                insert(temp->key,temp->value);
                temp=temp->next;
            }
            if(oldbucket[i]!=NULL){
                delete oldbucket[i];
            }
        }
        delete []oldbucket;
    }

public:
    hashmap(int ms=7){
        int cs=0;
        int ts=ms;
        bucket=new node<T>*[ts];

        for(int i=0;i<ts;i++){
            bucket[i]=NULL;
        }
    }
    void insert(string key,T value){
        int i=hashfn(key);

        node<T>* n=new node<T>(key,value);
        n->next=bucket[i];
        bucket[i]=n;
        cs++;

        float load_factor=cs/(ts*1.0);
        if(load_factor>0.7){
            rehash();
        }
    }
    T* search(string key){
        int i=hashfn(key);
        node<T>* temp=bucket[i];
        while(temp!=NULL){
            if(temp->key==key){
                return &(temp->value);
            }
            temp=temp->next;
        }
        return NULL;
    }

    T& operator[](string key){
        T* temp=search(key);
        if(temp==NULL){
            T garbage;
            insert(key,garbage);
            temp=search(key);
            return *temp;
        }
        else{
            return *temp;
        }
    }
    void erase(starting key){
        int i=hashfn(key);
        node<T>*temp=bucket[i];
        //homework
    }

    void print(){
        for(int i=0;i<ts;i++){
            cout<<"bucket"<<i<<"-->";
            node<T>* temp=bucket[i];
            while(temp!NULL){
                cout<<temp->key
            }
        }
    }
};

int main(){

    hashmap<int> h;
    h.insert("mango",100);
    h.insert("apple",200);

    return 0;
}
