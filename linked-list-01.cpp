#include <bits/stdc++.h>
using namespace std;

class node{

public:
int data;
node* link;
};

int main()
{

node *head=NULL,*second=NULL,*third=NULL,*tmp= NULL;

head = new node();
second = new node();
third = new node();

head->data = 10;
head->link = second;

second->data = 20;
second->link = third;

third->data = 30;
third->link = NULL;
tmp = head;
for ( int i = 0; i<3; i++)
{
cout<<tmp->data<<endl;
tmp = tmp->link;

}

}

// or we can use another function

/* #include <bits/stdc++.h>
using namespace std;

class node{

public:
int data;
node* link;
};

void printlist(node* n)
{
while(n != NULL)
{
cout<<n->data<<endl;
n = n->link;
}

}
int main()
{

node *head=NULL,*second=NULL,*third=NULL,*tmp= NULL;

head = new node();
second = new node();
third = new node();

head->data = 10;
head->link = second;

second->data = 20;
second->link = third;

third->data = 30;
third->link = NULL;

printlist(head);
} */
