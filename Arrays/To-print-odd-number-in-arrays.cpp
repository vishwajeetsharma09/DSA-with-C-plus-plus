#include <iostream>
using namespace std;
int main()
{
    // To print each element of arrays
    int arr[9] = {2, 4, 6, 8, 10, 7, 9, 11, -11};
    for (int i = 0; i < 9; i++)
    {
        if (arr[i] % 2 == 1 || arr[i]%2==-1)
        {
            cout << arr[i] << " ";
        }
    }
    return 0;
}