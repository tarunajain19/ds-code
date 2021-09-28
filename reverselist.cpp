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
   
   node *current=head, *Next=NULL,*prev=NULL;
   while(current!=NULL)
   {
    Next =current->next;
    current->next =prev;
    prev=current;
    current=Next;
   
   }
   temp=prev;
   while(temp!=NULL){
      cout<<temp->data;
      temp=temp->next;

   }

   return 0;
}
 