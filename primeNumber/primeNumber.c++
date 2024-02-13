#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % n == 0)
        {
            cout << "not a prime";
            return 0;
        }
    }
    cout << "prime number";
    return 0;
}