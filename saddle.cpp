#include <iostream>
using namespace std;
int main()
{ // row=min column= max saddle pt.
    int r, c;
    cin >> r >> c;
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }
    int flag = 1;
    int min;
    for (int i = 0; i < r; i++)
    {
        min = 0;
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] < arr[i][min])
            {
                min = j;
            }
        }
        for (int k = 0; k < r; k++)
        {
            if (arr[k][min] > arr[i][min])
            {
                flag=1; break;
            }
            else flag=0;
        }
        if(flag==0) 
        {  cout<<arr[i][min];
        break;}
        
    }
    if (flag == 1)
        cout << "saddle point not found";
    
}