#include<iostream>
using namespace std;
int main()
{
int t;
    cin >> t;
    while (t--)
    {
        int n, k, s;
        cin >> n >> k >> s;
        if (s < 7)
        {
            if (n >= k)
            {
                cout << ((k * s) / n) + ((k * s) % n != 0);
            }
            else
            {
                cout << -1;
            }
        }
        else
        {
            if (n < k)
            {
                cout << -1;
            }
            else if (n * 6 < k * 7)
            {
                cout << -1;
            }
            else
            {
                cout << ((k * s) / n) + ((k * s) % n != 0);
            }
        }
            cout<<endl;
    }
    return 0;
}