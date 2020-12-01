#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
struct node
{
    node *prev;
    int data;
    node *next;
};
node *head=NULL;

node* createNode(int x)
{
    node *p=(node *)malloc(sizeof(node));
    p->prev=NULL;
    p->data=x;
    p->next=NULL;
    return p;
}

void addNodeAtBeg(int x)
{
    node *p=createNode(x);
    if(head==NULL)
        head=p;
    else
    {
        p->next=head;
        head->prev=p;
        head=p;
    }
}

void addNodeAtEnd(int x)
{
    node *p=createNode(x);
    if(head==NULL)
    {
        head=p;
    }
    else
    {
        node *ptr=head;
        while(ptr->next!=NULL)
            ptr=ptr->next;
        ptr->next=p;
        p->prev=ptr;
    }
}

void deleteNodeAtBeg()
{
    if(head==NULL)
        cout<<"List is empty!Nothing to delete....";
    else
    {
        cout<<"Element deleted is:"<<head->data;
        head=head->next;
        if(head!=NULL)
        {
            free(head->prev);
            head->prev=NULL;
        }
    }
}

void deleteNodeAtEnd()
{
    if(head==NULL)
        cout<<"List is empty!Nothing to delete....";
    else if(head->next==NULL)
    {
        cout<<"Deleted Element is:"<<head->data;
        free(head);
        head=NULL;
    }
    else
    {
        node *ptr=head;
        while(ptr->next->next!=NULL)
            ptr=ptr->next;
        cout<<"Deleted Element is:"<<ptr->next->data;
        free(ptr->next);
        ptr->next=NULL;
    }
}

void traverse()
{
    if(head==NULL)
        cout<<"List is empty!Nothing to show....";
    else
    {
        node *ptr=head;
        while(ptr!=NULL)
        {
            cout<<ptr->data<<" ";
            ptr=ptr->next;
        }
    }
}

int main()
{
    int choice,n;
    while(1)
    {
        system("cls");
        cout<<"1. View List\n";
        cout<<"2. Add at the beginning\n";
        cout<<"3. Add at the end\n";
        cout<<"4. Delete at the beginning\n";
        cout<<"5. Delete at the end\n";
        cout<<"6. Exit\n";
        cout<<"\n Choose an element:";
        cin>>choice;
        switch(choice)
        {
        case 1:
            traverse();
            break;
        case 2:
            cout<<"Enter a number:";
            cin>>n;
            addNodeAtBeg(n);
            cout<<"Value Inserted!";
            break;
        case 3:
            cout<<"Enter a number:";
            cin>>n;
            addNodeAtEnd(n);
            cout<<"Value Inserted!";
            break;
        case 4:
            deleteNodeAtBeg();
            break;
        case 5:
            deleteNodeAtEnd();
            break;
        case 6:
            exit(0);
        default:
            cout<<"Choose valid option!";
        }
        getch();
    }
}
