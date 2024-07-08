//reverse a linked list..

#include<bits/stdc++.h>

using namespace std;

class node {
public:
    int info;
    node *link;

};

node *head = NULL, *tmp;

void creation(int data) {
    node *ptr;
    ptr = new node();
    ptr->info = data;
    ptr->link = NULL;

    if (head == NULL) {
        head = ptr;
        tmp = ptr;
    } else {
        tmp->link = ptr;
        tmp = ptr;
    }
}

void traverse() {
    node *srt;

    for (srt = head;;) {
        if (srt->link != NULL) {
            cout << srt->info << " ";
            srt = srt->link;
        } else {
            cout << srt->info << endl;
            break;
        }

    }
}

void reverse_linked_list(){
    
    node* prev=NULL,*cur,*next;
    
    for(cur=head;;){
        
        if(cur != NULL){
            
            next = cur->link;
            cur->link = prev;
            prev = cur;
            cur = next;
           
        }
        else{
            head = prev;
            break;
        }
        
    }
}
int main() {
    cout << "How many data you want to enter: ";

    int data, n;
    cin>>n;
    for (int i = 0; i < n; i++) {

        cin>>data;
        creation(data);


    }
    reverse_linked_list();
    cout << "Linked List: ";
    traverse();
    
   
}
