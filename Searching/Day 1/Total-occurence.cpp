#include <iostream>
using namespace std;
int firstOcc(int arr[], int size, int target)
{
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
    return ans;
}

int LastOcc(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            ans = mid;
            start = mid + 1;
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
    return ans;
}

int main()
{

    int arr[10] = {1, 2, 3, 4, 4, 4, 4, 4, 5, 6};
    int size = 10;
    int target = 4;
    int firstOccrence = firstOcc(arr, size, target);
    int lastOccurence = LastOcc(arr, size, target);
    int totalOcc = lastOccurence - firstOccrence + 1;
    cout << "Total occurence of the " << target << " is : " << totalOcc << endl;
}