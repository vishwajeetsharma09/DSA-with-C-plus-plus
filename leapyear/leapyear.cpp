#include <bits/stdc++.h>
using namespace std;
int main()
{
    int year;
    cin >> year;
    if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
    {
        cout << "Leap year";
    }
    else
    {
        cout << "Not Leap year";
    }
    return 0;
}