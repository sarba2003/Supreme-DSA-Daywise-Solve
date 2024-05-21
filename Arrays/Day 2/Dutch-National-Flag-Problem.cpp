#include <iostream>
using namespace std;
int main()
{
    // Sort 0's , 1's and 2's

    int arr[10] = {0, 1, 2, 0, 2, 2, 2, 1, 1, 0};
    int size = 10;
    int temp[100];
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            temp[count] = arr[i];
            count++;
        }
    }

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 1)
        {
            temp[count] = arr[i];
            count++;
        }
    }
    for (int i = 0; i < size; i++)
    {

        if (arr[i] == 2)
        {
            temp[count] = arr[i];
            count++;
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << temp[i] << " ";
    }
}