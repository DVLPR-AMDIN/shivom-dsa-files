#include <iostream>
using namespace std;

int main()
{
    int n, i;

    cin >> n >> i;

    int c = n | (1 << i);

    cout << c;
}