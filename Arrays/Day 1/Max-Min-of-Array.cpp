#include <iostream>
#include <climits>
using namespace std;
int maxOfArray(int arr[], int size)
{
    int maxi = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        maxi = max(arr[i], maxi);
    }
    return maxi;
}
int minOfArray(int arr[], int size)
{
    int mini = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        mini = min(arr[i], mini);
    }
    return mini;
}
int main()
{
    int arr[100];
    int size;
    cout << "Enter the Size Of the Array" << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the Value Of Index : " << i << endl;
        cin >> arr[i];
    }
    int resultForMax = maxOfArray(arr, size);
    cout << "The Maximum From the Given Array is : " << resultForMax << endl;
    int resultForMin = minOfArray(arr, size);
    cout << "The Minimum From The GIven Array is : " << resultForMin << endl;
}