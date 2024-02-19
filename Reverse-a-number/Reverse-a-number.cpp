// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int reverse = 0;
//     while (n)
//     {
//         int digit = n % 10;
//         reverse = reverse * 10 + digit;
//         n = n / 10;
//     }
//     cout<<reverse;
//     return 0;
// }
#include <iostream>
using namespace std;
int main()
{
    int n = 12345;
    // cin >> n;
    int reverse = 0;
    // for(int i=0 ;i<=n ;++i)
    while (n)
    {
        int digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }
    cout << reverse;
}