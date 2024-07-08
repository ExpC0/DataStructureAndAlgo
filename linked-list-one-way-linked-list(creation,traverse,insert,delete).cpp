#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int info;
    node *link;
    };

node *head=NULL,*tmp;
void creation(int data){

    node *ptr;
    ptr = new node();
    ptr->info = data;
    ptr->link = NULL;

    if(head == NULL){
    head=tmp=ptr;

        }
    else{

    tmp->link = ptr;
    tmp = ptr;
        }

    }

void traverse(){

    node *ptr;
    cout<<"you entered: "<<endl;
    for(ptr = head;;)
    {
    if(ptr->link != NULL)
    {
    cout<<ptr->info<<" ";
    ptr = ptr->link;
        }
    else{
    cout<<ptr->info<<endl;
    break;

    }

    }

    }

void insert_first(){
    int data;
    cout<<"Insert at first position: "<<endl;
    cin>>data;
    node* ptr;
    ptr = new node();
    ptr->info = data;
    ptr->link = head;
    head = ptr;
    }


void insert_last(){

    int data;
    cout<<"Insert at last position: "<<endl;
    cin>>data;
    node* ptr,*srt;
    ptr = new node();
    ptr->info = data;
    ptr->link = NULL;

    for(srt = head;;)
    {
    if(srt->link == NULL)
    {
    srt->link = ptr;
    break;
    }
    else{
    srt= srt->link;

    }

    }


    }


void insert_before(){

    int s_item;
    cout<<"Before which you want to insert: ";
    cin>>s_item;

    int data;
    cout<<"Insert before "<<s_item<<": ";
    cin>>data;

    node *ptr,*srt,*tmp;
    ptr= new node();
    ptr->info  = data;
    for(srt = head;;){

    if(srt->info == s_item){

        if(srt == head){

        insert_first();
            }
        else{
        ptr->link = srt;
        tmp->link = ptr;
        break;

        }
        }
    else{
    tmp = srt;
    srt = srt->link;

    }

        }



    }


void insert_after(){

    int s_item;
    cout<<"after which you want to insert: ";
    cin>>s_item;

    int data;
    cout<<"Insert after "<<s_item<<": ";
    cin>>data;

    node *ptr,*srt,*tmp;
    ptr= new node();
    ptr->info  = data;
    for(srt = head;;){

    if(srt->info == s_item){

        if(srt->link == NULL){

        insert_last();
        break;
            }
        else{
        srt->link = ptr;
        ptr->link = tmp;

        break;

        }
        }
    else{
    srt = srt->link;
    tmp = srt->link;

    }

        }



    }
    
    
void delete_after(){

    int s_item;
    cout<<"after which you want to delete: ";
    cin>>s_item;

  

    node *srt,*tmp,*tmp2;
 
    for(srt = head;;){

    if(srt->info == s_item){

        if(srt->link == NULL){

        //last_delete
        }
        
        else {
        srt->link = tmp2;
     	break;
            }
  
        }
    else{
    srt = srt->link;
    tmp = srt->link;
    tmp2=tmp->link;

    }

        }



    }
    
    
int main(){

    int data;
    int n;
    cout<<"How many data you want to input: "<<endl;
    cin>>n;
    cout<<"Enter data: "<<endl;

    for (int i=0;i<n;i++){

        cin>>data;
        creation(data);
        }


    insert_first();
    insert_last();
    insert_before();
    insert_after();

    traverse();
    }






