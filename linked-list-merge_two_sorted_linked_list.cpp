//merge two sorted linked lists

#include<bits/stdc++.h>
using namespace std;

class node {
public:
    int info;
    node* link;
};

node* head = NULL, *tmp;
node* head2 = NULL, *tmp2;

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

void creation2(int x) {

    node *ptr;
    ptr = new node;
    ptr->link = NULL;
    ptr->info = x;

    if (head2 == NULL) {
        head2 = ptr;
        tmp2 = ptr;
    } else {
        tmp2->link = ptr;
        tmp2 = ptr;
    }
}

void traverse(node* hd) {
    node* ptr = hd;
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

node* MergeSortedList() {

    node* ptr = new node;
    node* newhead = ptr;
    node *srt1 = head, *srt2 = head2;

    while (srt1 != NULL && srt2 != NULL) {

        if (srt1->info <= srt2->info) {
            ptr->link = srt1;
            srt1 = srt1->link;
        } else {
            ptr->link = srt2;


            srt2 = srt2->link;
        }
        ptr = ptr->link;
    }
    
    if(srt1 == NULL)
        ptr->link = srt2;
    else if(srt2 = NULL)
        ptr->link = srt1;
    
    return newhead->link;
}
int main() {


    cout << "Maximum Input for one: " << endl;
    int a;
    cin>>a;


    for (int i = 0; i < a; i++) {
        int x;
        cin>>x;
        creation(x);
    }
    cout << "Maximum Input for other: " << endl;
    int a1;
    cin>>a1;

    for (int i = 0; i < a1; i++) {
        int x;
        cin>>x;
        creation2(x);
    }
    cout << "Linked list1 : ";
    traverse(head);
    cout << "Linked list2 : ";
    traverse(head2);
    
    cout<<"Merge Sorted list: ";
    node* tmp = MergeSortedList();
    traverse(tmp);

    



}




/*
#include<bits/stdc++.h>
using namespace std;

class node {
public:
    int data;
    node* link;

};

node *head1 = NULL, *tmp = NULL;

node *head2 = NULL, *tmp2 = NULL;

node* head;

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
    node * srt = head;
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

node* merge(node* r, node* s) {
    node* srt;
    node* p = r;
    node*q = s;

    srt = new node();
    head = srt;



    while (p != NULL && q != NULL) {



        if (p->data <= q->data) {

            srt->link = p;
            p = p->link;
        } else {
            srt->link = q;

            q = q->link;
        }
        srt = srt->link;
    }

    while (q != NULL) {

        srt->link = q;

        q = q->link;
        srt = srt->link;
    }
    while (p != NULL) {

        srt->link = p;

        p = p->link;
        srt = srt->link;
    }

    return head->link;



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
    head = merge(head1, head2);
    traverse3();
}
*/
