// * * * * *   * * * * *
// * * * *       * * * *
// * * *           * * *
// * *               * *
// *                   *
// *                   *
// * *               * *
// * * *           * * *
// * * * *       * * * *
// * * * * *   * * * * *

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Number" << endl;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int j = 0; j < n - row; j++)
        {
            cout << "* ";
        }
        for (int j = 0; j < (2 * row) + 1; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j < n - row; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int row = 0; row < n; row++)
    {
        for (int j = 0; j < row + 1; j++)
        {
            cout << "* ";
        }
        for (int j = 0; j < ((2 * n) - (2 * row)) - 1; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j < row + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}