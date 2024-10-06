#include <bits/stdc++.h>
#include <cstring>
using namespace std;
int main()
{

    // int n;
    // cin >> n;
    int arr[10] = {1, 2, 3, 4, 5, 6};
    int a = 3;
    memset(arr, arr + 10, a);
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}