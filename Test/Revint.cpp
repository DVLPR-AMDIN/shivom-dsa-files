#include <bits/stdc++.h>
using namespace std;
void rev(int n)
{
    int ans = 0, rem = 0;
    while (n > 0)
    {
        rem = n % 10;
        ans = (ans * 10) + rem;
        n = n / 10;
    }
    cout << ans;
}
int main()
{
    int n;
    cin >> n;
    rev(n);
}