#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node* prev;
    struct node* next;
};
void  create( node** head )
{
    node* p ,*temp=NULL;
    for(int i=0;i<3;i++)
    {
        p = new node();
        p->next =NULL,p->prev=NULL;
        cout<<"enter data of linked list";
        cin>>p->data;
       
    if(*head==NULL)
    {
        *head=p;
       
    }
    else
    {
        temp->next = p;
        p->prev =temp;
       // temp=temp->next;
    }
     temp =p;
    }
   
   
}
void display(node* head )
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->next;
    }
}
void insertr(node** head)
{
    cout<<endl<<"enter the position where you want to insert new element";
    int pos,value;
    cin>>pos;
    node* n =new node ,* temp;
    temp=*head;
    cout<<"value to be inserted"<<endl;
    cin>>value;
    n->data =value;
    n->prev =NULL;
    n->next=NULL;
    int i=1;
    while(temp!=NULL&&i!=pos)
    {
        temp=temp->next;
        i++;
    }
    if(pos==1)
    {
        temp->prev = n;
        *head=n;
        n->next = temp;
    }
    else {
        temp->prev=n;
        temp->prev->next=n;
        n->next=temp;
        n->prev =temp->prev;
    }
    

}
int main()
{
    node* head=NULL; 
    create(&head);
     display(head);
    insertr(&head);
    display(head);

}