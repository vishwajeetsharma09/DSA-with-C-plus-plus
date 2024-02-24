#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int mul = 1;
    while (n)
    {
        int reminder = n % 10;
        sum = sum + reminder * mul;
        n = n / 10;
        mul = mul * 2;
        // sum++;
    }
    cout << sum;
    return 0;
}