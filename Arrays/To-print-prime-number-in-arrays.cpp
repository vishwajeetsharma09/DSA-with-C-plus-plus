#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[6] = {3, 4, 6, 7, 54, 98};
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] % i == 0)
        {
            cout << arr[i];
        }
    }
    return 0;
}

// using functions
// #include <bits/stdc++.h>
// using namespace std;
// void Prime(int num)
// {
//     if (num < 2)
//         return;
//     for (int i = 2; i < num - 1; i++)
//     {
//         if (num % i == 0 || num % i == -1)
//         {
//             return;
//         }
//     }
//     cout << num << " ";
//     return;
// }
// int main()
// {
//     int arr[9] = {2, 4, 6, 8, 10, 7, 9, 11, -11};
//     for (int i = 0; i < 9; i++)
//     {
//         Prime(arr[i]);
//     }
// }