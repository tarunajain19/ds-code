#include<iostream>
using namespace std;
#include<algorithm>
int main()
{
    int r,c,entry;
    cin>>r>>c>>entry;
    int arr[entry+1][3];
    arr[0][0]=r;
    arr[0][1]=c;
    arr[0][2]=entry;
    for(int i=1;i<entry+1;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    int t;
    for(int i=0;i<entry+1;i++)
    {
        t=arr[i][0];
        arr[i][0]=arr[i][1];
        arr[i][1]=t;
    }
    int temp;
    for(int i=1;i<entry+1;i++)
    {
        for(int j=i+1;j<entry+1;j++)
        {
            if(arr[i][0]>arr[j][0])
            {
                temp =arr[i][0];
                arr[i][0]=arr[j][0];
                arr[j][0]=temp;
                swap(arr[i][1],arr[j][1]);
                swap(arr[i][2],arr[j][2]);
            }
        }
    }
    for(int i=0;i<entry+1;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    
}