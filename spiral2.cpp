#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n][n];
    int k=1;
    //spiral matrix
    int minr=0 ,maxr=n-1,minc=0,maxc=n-1;
    int total =n*n;
    int count=0; 
    while(count<total)
    {
        for(int i=minc,j=minr;i<=maxc &&count<total;i++)
        {
            arr[minr][i]=k++;
            count++;
        }
        minr++;
        for(int i=minr,j=maxc;i<=maxr&&count<total;i++)
        {
            arr[i][maxc]=k++;
            count++;
        }
        maxc--;
        for(int i=maxc,j=maxr;i>=minc&&count<total;i--)
        {
            arr[maxr][i]=k++;
            count++;
        }
        maxr--;
        for(int i=maxr,j=minc;i>=minr&&count<total;i--)
        {
            arr[i][j]=k++;
            count++;
        }
        minc++;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    
}