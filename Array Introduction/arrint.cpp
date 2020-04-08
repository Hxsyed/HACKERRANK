#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    int arr[a]{}; // size of array
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    for (int i = a - 1; i < a; i--) // reversing an array
    {
        cout << arr[i] << " ";
        if (i == 0)
        {
            break;
        }
    }
    return 0;
}
