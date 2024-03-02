#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[6] = {9, 4, 4, 2, 54, 98};
    int smallest_number = arr[0]; // assume the first number is the largest one
    for (int i = 1; i < 6; i++)
    {
        if (arr[i] < smallest_number)
        {
            smallest_number = arr[i];
        }
    }
    cout << smallest_number;
    return 0;
}