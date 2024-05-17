#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
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
    int target;
    cout << "Enter the Target Value" << endl;
    cin >> target;
    int result = linearSearch(arr, size, target);
    cout << "The Target value is at " << result << " " << "index" << endl;
}