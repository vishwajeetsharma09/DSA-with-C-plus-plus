#include <iostream>
using namespace std;
int IsEvenOdd(int numa) // function declare
{
    if (numa % 2 == 0)
    {
        return 0;
    }
    else
        return 1;
}

int main()
{
    int num;
    cin >> num;
    int res = IsEvenOdd(num); // function cell
    if (res == 0)
    {
        cout << "even";
    }
    else
    {
        cout << "Odd";
    }
    return 0;
}