#include<bits/stdc++.h>

using namespace std;


class node {
public:
int info;
node *link;

};

node *head=NULL,*tmp;


void creation(int data)
{
node *ptr;
ptr = new node();
ptr->info = data;
ptr->link = NULL;

if ( head == NULL)
{
head = ptr;
tmp = ptr;
}

else
{
tmp->link = ptr;
tmp = ptr;
}
}

void traverse(){
node *srt;

for (srt = head;;)
{
if ( srt->link != NULL)
{
cout<<srt->info<<" ";
srt = srt->link;
}
else{
cout<<srt->info<<endl;
break;
}

}
}


node* middle(node* start , node* last){
    
    node *slow = start;
    node *fast = start->link;
    while (fast != last) {
        fast = fast->link;

        if (fast != last) {
            fast = fast->link;
            slow = slow->link;
        }
    }

    return slow;
}

node* BinarySearch(node* head, int value) {

    node *start = head, *last = NULL;

    while (start != last) {

        node *mid = middle(start, last);

        if (start == NULL) {
            return NULL;
        } 
        else if (mid->info == value) {
            cout << "FOUND";
            return mid;

        }
         else if (mid->info < value) {
            start = mid->link;
        }
         else {
            last = mid;
        }
    }
    cout<<"NOT FOUND";
    return NULL;




}

int main() {

    for (int i = 0; i < 30; i = i + 3) {


creation(i);


}
traverse();

BinarySearch(head,27);

}
