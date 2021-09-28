#include<iostream>
using namespace std;
#define  INT_MAX
int main()
{
    int arr[]={10,20,30,40,50,60};
    int *p[]={arr,arr+1,arr+2,arr+3,arr+4,arr+5};
    cout<<arr<<" "<<p<<endl;
    int **pp=p;
    pp++;
    cout<<pp-p<<" "<<*pp-arr<<" "<<**pp;
    *pp++;
    cout<<endl<<pp-p<<" "<<*pp-arr<<" "<<**pp<<endl;
    ++*pp;
    cout<<pp-p<<" "<<*pp-arr<<" "<<**pp<<endl;
    ++**pp;
    cout<<pp-p<<" "<<*pp-arr<<" "<<**pp<<endl;
return 0;
}