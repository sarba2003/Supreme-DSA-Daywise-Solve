#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {0, 1, 0, 0, 1, 0};
    int size = 6;
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
        cout << temp[i] << " ";
    }
}