//Add 1 to a number represented as linked list

#include<bits/stdc++.h>
using namespace std;

class node {
public:
    int info;
    node* link;
};

node* head = NULL, *tmp;

void creation(int x) {

    node *ptr;
    ptr = new node;
    ptr->link = NULL;
    ptr->info = x;

    if (head == NULL) {
        head = ptr;
        tmp = ptr;
    } else {
        tmp->link = ptr;
        tmp = ptr;
    }
}

void traverse() {
    node* ptr = head;
    for (;;) {
        if (ptr->link != NULL) {
            cout << ptr->info << "->";
            ptr = ptr->link;
        } else {
            cout << ptr->info << endl;
            break;
        }
    }
}

void reverse() {

    node* prev = NULL, *cur = head, *next;
    for (;;) {
        if (cur != NULL) {
            next = cur->link;
            cur->link = prev;
            
            prev = cur;
            cur = next;
            
            
        } else
        {
            head = prev;
        break;}
    }
}
void increment(){
    
    node* srt,*tmp;
    int carry=1,sum;
    srt = head;
    for(;;){
        if(srt != NULL)
        {
            sum = (carry+srt->info)%10;
            carry = (srt->info+carry)/10;
            srt->info = sum;
            
            tmp =srt;
            srt=srt->link;
            
            
        }
        else
       
            break;
    }
    
    if(carry == 1){
        node* ptr = new node;
        ptr->info = carry;
        ptr->link = NULL;
        tmp->link = ptr;
    }
}
int main() {


    cout << "Maximum Input: " << endl;
    int a;
    cin>>a;

    for (int i = 0; i < a; i++) {
        int x;
        cin>>x;
        creation(x);
    }
    cout << "Linked list : ";
    traverse();
    reverse();
    increment();
    reverse();
    cout<<"Adding 1 : "<<endl;
    traverse();
    
}
