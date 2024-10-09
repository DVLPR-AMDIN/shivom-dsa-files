#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin >> k;
    int arr[5] = {1, 2, 3, 4, 5};
    while (k >= 0)
    {
        k--;
        arr[0] = arr[1];
        arr[1] = arr[2];
        arr[2] = arr[3];
        arr[3] = arr[4];
        arr[4] = arr[0];
        // int temp = arr[0];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}