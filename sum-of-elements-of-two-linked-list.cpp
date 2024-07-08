//add two linked list elements from left to right


#include<bits/stdc++.h>
using namespace std;

class node {
public:
    int data;
    node* link;

};

node *head1 = NULL, *tmp = NULL;

node *head2 = NULL, *tmp2 = NULL;

node *head3=NULL;

void creation1(int d) {

    node* ptr;
    ptr = new node();

    ptr->data = d;
    ptr->link = NULL;

    if (head1 == NULL) {
        head1 = ptr;
        tmp = ptr;
    } else {
        tmp->link = ptr;
        tmp = ptr;
    }
}

void creation2(int d) {

    node* ptr;
    ptr = new node();

    ptr->data = d;
    ptr->link = NULL;

    if (head2 == NULL) {
        head2 = ptr;
        tmp2 = ptr;
    } else {
        tmp2->link = ptr;
        tmp2 = ptr;
    }
}

void add(node *head1, node *head2) {
    node* srt1, *srt2;
    node *ptr,*tmp;


    srt1 = head1;
    srt2 = head2;
    
    int sum, carry=0;
    
    while (srt1 != NULL && srt2 != NULL) {
        
        sum = srt1->data + srt2->data+carry;
        
        carry = sum/10;
        sum = sum % 10;
        
        ptr = new node();

        ptr->data = sum;
        ptr->link = NULL;

        if (head3 == NULL) {
            head3 = ptr;
            tmp = ptr;
        } else {
            tmp->link = ptr;
            tmp = ptr;
        }
        srt1 = srt1->link;
        srt2 = srt2->link;


    }
    
    if(carry){
        ptr = new node();
    ptr->data = carry;
    ptr->link = NULL;
    tmp->link = ptr;
    }
    
    
    
    

}

void traverse1() {
    node * srt = head1;
    for (;;) {
        if (srt->link != NULL) {
            cout << srt->data << " ";
            srt = srt->link;
        } else {
            cout << srt->data << endl;
            break;
        }
    }
}

void traverse2() {
    node * srt = head2;
    for (;;) {
        if (srt->link != NULL) {
            cout << srt->data << " ";
            srt = srt->link;
        } else {
            cout << srt->data << endl;
            break;
        }
    }
}

void traverse3() {
    node * srt = head3;
    for (;;) {
        if (srt->link != NULL) {
            cout << srt->data << " ";
            srt = srt->link;
        } else {
            cout << srt->data << endl;
            break;
        }
    }
}

int main() {
    int n;
    cin>>n;
    for (int i = 0; i < n; i++) {
        int x;
        cin>>x;
        creation1(x);
    }
    int m;
    cin>>m;
    for (int i = 0; i < m; i++) {
        int x;
        cin>>x;
        creation2(x);
    }
    traverse1();
    traverse2();
    
    add(head1,head2);
    traverse3();
    
}
