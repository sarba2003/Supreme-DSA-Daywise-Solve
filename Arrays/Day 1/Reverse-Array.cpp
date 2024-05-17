#include <iostream>
using namespace std;
int main()
{
    int arr[9] = {4, 8, 6, 2, 50, 432, 75, 2, 6};
    int size = 9;
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}