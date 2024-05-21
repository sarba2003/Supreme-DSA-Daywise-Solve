#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 1, 0, 1, 0};
    int size = 5;
    int temp[100];
    // output => {0,0,1,0,1}

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 1)
        {
            temp[i] = 0;
        }
        if (arr[i] == 0)
        {
            temp[i] = 1;
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << temp[i] << " ";
    }
}