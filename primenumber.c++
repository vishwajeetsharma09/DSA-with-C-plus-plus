#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int div;
    for (int i = -0; i <= n; i++)
    {
        if (n % div == 0)
        {
            cout << "Not Prime" << endl;
            break;
        }
        else
        {
            cout << "Prime" << endl;
            break;
        }
    }
}