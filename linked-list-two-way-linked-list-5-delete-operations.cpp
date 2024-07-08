#include<bits/stdc++.h>
using namespace std;

class node
{

public:
    int  info;
    node* next;
    node* prev;

};

node* head = NULL,*tmp;

void  creation(int data)
{

    node* ptr = new node();
    ptr->info = data;
    ptr->next = NULL;
    ptr->prev = NULL;

    if (head == NULL)
    {

        head = ptr;
        tmp = ptr;

    }
    else
    {

        tmp->next = ptr;
        ptr->prev = tmp;
        tmp = ptr;


    }



}

void forward_traverse()
{
    if(head != NULL && tmp != NULL  )
    {

        node *srt;
        for(srt=head;;)
        {
            if(srt->next != NULL)
            {
                cout<<srt->info<<" ";
                srt = srt->next;
            }
            else
            {

                cout<<srt->info<<endl;
                break;
            }
        }

    }
}

void reverse_traverse()
{

    if(head != NULL && tmp != NULL  )
    {
        node *srt;
        for(srt=tmp;;)
        {
            if(srt->prev != NULL)
            {
                cout<<srt->info<<" ";
                srt = srt->prev;
            }
            else
            {

                cout<<srt->info<<endl;
                break;
            }
        }
    }


}

void del_first()
{
    head->next->prev = head;
    head = head->next;

    head->prev = NULL;


}

void del_last ()
{

    node *tail;
    tail = tmp->prev;
    tmp->prev->next = NULL;
    tmp =  tail;

}



void del_after()
{
    node *ptr;
    int g_item;
    cout<<"After which element you want to delete : ";
    cin>>g_item;

    for(ptr=head;;)
    {
        if(ptr->info==g_item)
        {

            if(ptr->next->next == NULL)
            {
                del_last();
                break;

            }

            else
            {

                ptr->next->next->prev=ptr;
                ptr->next = ptr->next->next;
                break;


            }


        }
        else
        {

            ptr=ptr->next;

        }

    }

}



void del_before()
{
    node *ptr;
    int g_item;
    cout<<"Before which element you want to delete : ";
    cin>>g_item;

    for(ptr=head;;)
    {
        if(ptr->info==g_item)
        {

            if(ptr->prev->prev == NULL)
            {
                del_first();
                break;

            }

            else
            {

                ptr->prev->prev->next=ptr;
                ptr->prev = ptr->prev->prev;
                break;


            }


        }
        else
        {

            ptr=ptr->next;

        }

    }
}


void del_given()
{
    node *ptr;
    int g_item;
    cout<<"which element you want to delete : ";
    cin>>g_item;

    for(ptr=head;;)
    {
        if(ptr->info==g_item)
        {
            if(ptr->next == NULL && ptr->prev == NULL)
            {
                head = NULL;
                tmp = NULL;
                break;
            }


            else if(ptr->prev == NULL)
            {
                del_first();
                break;

            }

            else if(ptr->next == NULL)
            {
                del_last();
                break;
            }


            else
            {

                ptr->prev->next=ptr->next;
                ptr->next->prev = ptr->prev;
                break;


            }


        }
        else
        {

            ptr=ptr->next;

        }

    }
}
int main()
{

    int n;
    cout<<"How many data you want to enter: ";
    cin>>n;
    int data;

    for(int i=0; i<n; i++)
    {

        cin>>data;
        creation(data);
    }
    cout<<"Forward traversing: ";
    forward_traverse();
    cout<<"Reverse traversing: ";
    reverse_traverse();

    del_first();
    cout<<"After deleting first element: ";
    forward_traverse();
    del_last();
    cout<<"After deleting last element : ";

    forward_traverse();
    del_after();
    forward_traverse();
    del_before();
    forward_traverse();
    del_given();
    forward_traverse();


}
