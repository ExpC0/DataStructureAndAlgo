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
void reverse_traverse()
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
void forward_traverse()
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

void insert_first()
{

    node* ptr;
    ptr = new node();
    cout<<"Insert data at first position: ";
    int data;
    cin>>data;
    ptr->info = data;
    ptr->next = head;
    head->prev = ptr;
    head = ptr;
}

void insert_last()
{

    node* ptr;
    ptr = new node();
    cout<<"Insert data at last position: ";
    int data;
    cin>>data;
    ptr->info = data;

    tmp->next = ptr;
    ptr->prev = tmp;
    ptr->next = NULL;
    tmp = ptr;
}

void insert_before()
{

    node* ptr,*srt;
    ptr = new node();
    int g_item;
    cout<<"Before which element u want to insert: ";
    cin>>g_item;


    for(srt = head;;)
    {
        if(srt->info == g_item)
        {


            if(srt==head)
            {

                insert_first();
                break;

            }
            else
            {
                cout<<"Insert before "<<g_item<<": ";
                int data;
                cin>>data;
                ptr->info = data;

                ptr->prev=srt->prev;
                srt->prev->next = ptr;
                srt->prev = ptr;
                ptr->next = srt;
                break;
            }

        }
        else
        {
            srt=srt->next;

        }

    }

    }

    void insert_after()
    {

        node* ptr,*srt;
        ptr = new node();
        int g_item,data;
        cout<<"After which element you want to insert: ";
        cin>>g_item;

        for(srt = head;;)
        {

            if(srt->info == g_item)
            {

                if(srt == tmp)
                {

                    insert_last();
                    break;

                }
                else
                {

                    cout<<"Insert after "<<g_item<<": ";
                    cin>>data;
                    ptr->info = data;
                    srt->next->prev = ptr;
                    ptr->next = srt->next;
                    srt->next = ptr;
                    ptr->prev = srt;

                    break;


                }


            }
            else
            {

                srt = srt->next;

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
        insert_first();
        insert_last();
        insert_before();
        insert_after();

        cout<<"Forward traversing: ";
        forward_traverse();
        cout<<"Reverse traversing: ";
        reverse_traverse();

    }
