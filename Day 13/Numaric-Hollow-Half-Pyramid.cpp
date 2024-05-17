#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Number" << endl;
    cin >> n;

    for (int row = 0; row < n; row++)
    {
        for (int j = 0; j < row + 1; j++)
        {
            if (row == 0 || row == n - 1 || j == 0 || j == row)
            {
                cout << j + 1 << " ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}