#include <bits/stdc++.h>
using namespace std;

int Binarysearch(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    while (s <= e)
    {
        int m = (s + e) / 2;
        if (arr[m] == key)
        {
            cout << "YES" << " ";
            return m;
        }
        else if (arr[m] < key)
        {
            s = m + 1;
        }
        else
        {
            e = m - 1;
        }
    }
    cout << "NOT Found";
    return 0;
}

int main()
{
    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};
    int key;
    cin >> key;
    cout << Binarysearch(arr, n, key);
}