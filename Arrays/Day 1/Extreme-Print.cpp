#include <iostream>
using namespace std;
int main()
{
    int arr[7] = {2, 4, 3, 10, 8, 1, 0};
    int size = 7;
    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        cout << arr[start] << endl;
        cout << arr[end] << endl;
        start++;
        end--;
        if (start == end)
        {
            cout << arr[start] << endl;
        }
    }
}