#include <bits/stdc++.h>
using namespace std;

void rev(int arr[], int s, int e)
{
    while (s < e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}
void rotatbykey(int arr[], int n, int k)
{
    rev(arr, 0, n - k - 1);
    rev(arr, n - k, n - 1);
    rev(arr, 0, n - 1);
}

int main()
{
    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};
    rotatbykey(arr, n, 2);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}