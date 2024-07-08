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
cout<<srt->info<<endl;
srt = srt->link;
}
else{
cout<<srt->info<<endl;
break;
}

}
}

int main(){

for( int i = 0; i<1000;i++){

int data=0;
creation(data);
data++;

}
traverse();
}
