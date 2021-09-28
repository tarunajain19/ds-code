#include<iostream>
using namespace std;
int main()
{
    int arr[5]={11,55,22,33,99};
    int min =arr[0],k; 
    int max=arr[0];
    cout<<"kth smallest element";
    cin>>k;
    for(int i=0;i<5;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
        max =arr[i];
    }
    int maxx=max;
    cout<<min<<max;
    int mini =arr[0];
   for(int j=1;j<k;j++)
    {
        max=maxx;
        for(int i=0;i<5;i++)
        {
            if(arr[i]<max &&arr[i]>min)
            {
                max =arr[i];
            }
        }
        min=max;
    }
    cout<<min;
}