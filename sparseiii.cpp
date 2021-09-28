#include<iostream>
using namespace std;
#include<algorithm>
int main()
{ 
    int r,c,entry,r1,c1,entry2;
    cin>>r>>c>>entry>>r1>>c1>>entry2;
    int arr[entry+1][3],arr1[entry2+1][3];
    arr[0][0]=r; arr1[0][0]=r1;
    arr[0][1]=c; arr1[0][1]=c1;
    arr[0][2]=entry; arr1[0][2]=entry2;

    for(int i=1;i<entry+1;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=1;i<entry2+1;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr1[i][j];
        }
    }
    int t;
    for(int i=0;i<entry2+1;i++)
    {
        t=arr1[i][0];
        arr1[i][0]=arr1[i][1];
        arr1[i][1]=t;
    }
    int temp;
    for(int i=1;i<entry2+1;i++)
    {
        for(int j=i+1;j<entry2+1;j++)
        {
            if(arr1[i][0]>arr1[j][0])
            {
                temp =arr1[i][0];
                arr1[i][0]=arr1[j][0];
                arr1[j][0]=temp;
                swap(arr1[i][1],arr1[j][1]);
                swap(arr1[i][2],arr1[j][2]);
            }
        }
}
   // multiplication
    int arr2[entry+entry2][3];
    int k=0,sum,crow,ccol;
    int i=1,j,p;
    while(i<=entry)
    {   p=i;
        j=1;
        while(j<=entry2)
        {
            crow = arr[i][0];
            ccol= arr1[j][0];
            sum=0;
            while(i<=entry && j<=entry2 &&crow==arr[i][0] && ccol==arr1[j][0])
            {
            if(arr[i][1]==arr1[j][1])
             {
                
                sum= sum+ arr[i][2] * arr1[j][2];
               i++; j++;
            }
            else if(arr[i][1]<arr1[j][1])
                i++;
                else
                j++;
            }
            if(sum!=0)
            {
                arr2[k][0]= crow;
                arr2[k][1]=ccol;
                arr2[k][2]=sum;
                k++;
            }
            if(j<=entry2) i=p;
            
            while(j<=entry2 && arr1[j][0]==ccol)
            {
                j++;
            }
            }
            while(i<=entry && arr[i][0]==crow)
            {
                i++;
            }
        
    }
    cout<<endl<<"Matrix Multiplication  ";
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr2[i][j]<<" ";
        }
        cout<<"\n";
    }
}