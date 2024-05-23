#include <iostream>
using namespace std;
int main()
{
    int arr[7] = {1, 2, 4, 4, 4, 4, 5};
    int size = 7;
    int target = 5;
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            ans = mid;
            end = mid - 1;
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
    cout << "The 1st occurence index is : " << ans << endl;
}