#include <bits/stdc++.h>
using namespace std;

int linearsearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (key == arr[i])
        {
            cout << "Yes" << " ";
            return i;
        }
    }
    cout << "NO";
    return -1;
}

int main()
{
    int n = 5;
    int arr[n] = {5, 4, 3, 2, 1};
    int key;
    cin >> key;
    cout << linearsearch(arr, n, key);
}