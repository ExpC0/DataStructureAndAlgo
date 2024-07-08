//make new list form taking one form this one from that linked list

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

void AlternativeMerge() {

    node *srt1 = head, *srt2 = head2;

    while (srt1 != NULL && srt2 != NULL) {

        node *tmp1 = srt1->link;
        node *tmp2 = srt2->link;

        srt1->link = srt2;
        srt2->link = tmp1;

        srt1 = tmp1;
        srt2 = tmp2;

    }



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

    AlternativeMerge();
    cout << "Alternatively Merged linked list: ";
    traverse(head);




}
