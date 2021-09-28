#include<iostream>
using namespace std;
struct node
{
    int data;
      struct node *next;
 };
int main(){
   node *head=NULL;
   node *p;
   node *temp=NULL;
   int n;
   int count=0;
   cout<<"no of elements in list"<<endl;
   cin>>n;
   for(int i=0;i<n;i++){
    p =new node();
      cout<<"enter the data"<<endl;
      cin>>p->data;
      count++;
      p->next=NULL;
      if(head==NULL) {
         head=p;
        
      }
      else{
       temp->next=p;
      
      }
       temp=p;
      
   }
   temp=head;
   while(temp!=NULL){
      cout<<temp->data;
      temp=temp->next;

   }
   temp=head;
   int key;
   cout<<"enter the key";
   cin>>key;
   node *q=new node;
   while(temp->next!=NULL)
   {
      if(head->data==key)
      {
         q=head;
         head=head->next;
         free(q);
      }
     else if(temp->next->data==key)
      {
         q=temp->next;
         temp->next=temp->next->next;
         free(q);
      }
      else{
         temp=temp->next;

      }
   }
    temp=head;
   while(temp!=NULL){
      cout<<temp->data;
      temp=temp->next;}
   return 0;
}
 