#include <bits/stdc++.h>
using namespace std;

int main()
{
    // print the prime number
    int num, prime;
    cin >> num;
    if (num == 1 && num == 0)
    {
        cout << "universal value";
    }
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            cout << "number is prime";
        }
        else
        {
            cout << "number is not a prime";
        }
        return 0;
    }
}
