#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int complement;
    while (n)
    {
        int reminder = n % 10;

        if (reminder == 1)
        {
            cout << "0";
        }
        else
        {
            cout << "1";
        }

        // complement = reminder ^ 1;
        n = n / 10;
        // cout << complement;
        cout << reminder;
    }

    return 0;
}