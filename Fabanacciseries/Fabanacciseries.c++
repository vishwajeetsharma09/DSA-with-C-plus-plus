#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int first_number = 0;
    int second_number = 1;
    int current_number;
    for (int i = 0; i <= n; i++)
    {
        current_number = first_number + second_number;
        first_number = second_number;
        second_number = current_number;
        cout << current_number << "\n";
    }
    cout << current_number << " ";
    // int n;
    // n = 3 > 2 > 1;
    // cout << n;
    return 0;
}