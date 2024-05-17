#include <iostream>
using namespace std;
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
    int ones = 0;
    int zeros = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            zeros++;
        }
        if (arr[i] == 1)
        {
            ones++;
        }
    }

    cout << "The Number of Ones In The Given Array is : " << ones << " " << "And Number Of Zeros Is : " << zeros << endl;
}