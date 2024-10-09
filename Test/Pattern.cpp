#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n - i; j++)
        {
            cout << "*";
        }
        for (int r = i; r <= 2; r++)
        {
            cout << r;
        }
        // for (int a = 0; a < i; a++)
        // {
        //     cout << a;
        // }
        cout << endl;
    }
}