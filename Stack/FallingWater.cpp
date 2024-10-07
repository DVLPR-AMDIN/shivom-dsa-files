#include <bits/stdc++.h>
using namespace std;
int FallingWater(int arr[], int n)
{
    stack<int> st;
    int pl[n];
    int nl[n];
    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && st.top() <= arr[i])
        {
            st.pop();
        }
        if (st.empty())
        {
            pl[i] = -1;
            st.push(arr[i]);
        }
        else
        {
            pl[i] = st.top();
        }
    }
    while (st.empty())
    {
        st.pop();
    }

    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && st.top() <= arr[i])
        {
            st.pop();
        }
        if (st.empty())
        {
            nl[i] = n;
            st.push(arr[i]);
        }
        else
        {
            nl[i] = st.top();
        }
        // st.push(arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << nl[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << pl[i] << " ";
    }
    while (!st.empty())
    {
        st.pop();
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = pl[i] + nl[i];
        if (arr[i] < nl[i] && arr[i] < pl[i])
        {
            ans += min(pl[i], nl[i]) - arr[i];
        }
    }
    return ans;
}
int main()
{
    int n = 8;
    int arr[n] = {5, 2, 4, 0, 1, 6, 3, 6};
    cout << endl
         << FallingWater(arr, n);
}
// 52401636