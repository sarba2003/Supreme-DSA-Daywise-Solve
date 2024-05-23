#include <iostream>
using namespace std;
int main()
{
    int arr[7] = {2, 4, 5, 6, 8, 10, 15};
    int size = 7;
    int target = 2;
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            cout << "The target element index is : " << mid << endl;
            break;
        }
        if (target < arr[mid])
        {
            end = mid - 1;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
}