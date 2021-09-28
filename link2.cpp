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
    node *sanjoli=new node;
    sanjoli->data=100;
    sanjoli->next=NULL;
    int pos;
    cin>>pos;
    temp=head;
    int x=1;

    while(temp!=NULL&&x!=pos){
        temp=temp->next;
        x++;
    }
    //  node *q=NULL;
    //  q=temp->next;
    if(temp==NULL) head=sanjoli;
    else if(x==1){
        sanjoli->next=head;
        head=sanjoli;
        
    }
   else  { sanjoli->next=temp->next;
     temp->next=sanjoli;}








   //display
   temp=head;
   while(temp!=NULL){
      cout<<temp->data<<" ";
      temp=temp->next;

   }
   cout<<endl<<count;
   
   return 0;
}
 