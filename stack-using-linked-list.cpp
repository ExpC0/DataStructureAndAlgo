#include<bits/stdc++.h>
using namespace std;

class node {
public:
    int info;
    node *link;
};

node* top = NULL;

void push(int data){
    
    node* ptr;
    ptr = new node();
    ptr->info = data;
    ptr->link = top;  // link is directed to down
    top = ptr;
    
    
    
}

void pop(){
    
   
    top = top->link;
}

void Top(){
    if(top != NULL)
    cout<<"Top: "<<top->info<<endl;
}

void isEmpty()
{
    if(top==NULL){
        cout<<"Stack is empty."<<endl;
    }
}

void print(){
    
    cout<<"Stack: "<<endl;
    node *srt;
    for(srt=top;;){
        
        if(srt != NULL){
            cout<<srt->info<<endl;
            srt=srt->link;
        }
        else{
            break;
        }
    }
    
    
}

int main(){
    
    
    push(5);
    push(3);
    push(1);
    push(0);
    print();
    pop();
    print();
    Top();
    isEmpty();
    
}
