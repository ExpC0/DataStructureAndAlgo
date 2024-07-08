#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node* link;
    
};

node *head=NULL,*tmp;

void creation(int d){
    
    node* ptr;
    ptr = new node();
    
    ptr->data=d;
    ptr->link=head;
    
    if(head == NULL){
        head=ptr;
        tmp=ptr;
    }
    else{
        tmp->link=ptr;
        tmp=ptr;
    }
}

void traverse()
{
    node * srt=head;
    for(;;){
        if(srt->link != head){
            cout<<srt->data<<" ";
            srt=srt->link;
        }
        else{
            cout<<srt->data<<endl;
            break;
        }
    }
}

void insert(int x)
{
    node * srt=head;
    for(;;){
        if(srt->link != head){
     
            srt=srt->link;
        }
        else{
            
            node * ptr=new node();
            ptr->data=x;
            ptr->link=head;
            srt->link=ptr;
            head=ptr;
            break;
        }
    }
}

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        creation(x);
    }
    traverse();
    int x;
    cin>>x;
    insert(x);
    traverse();
}
