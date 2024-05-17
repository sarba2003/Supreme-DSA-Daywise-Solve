#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Number" << endl;
    cin >> n;
    int counter = 1;
    for (int row = 0; row < n; row++)
    {
        for (int j = row + 1; j <= n; j++)
        {
            if (row == 0 || row == n - 1 || j == row + 1 || j == n)
            {
                cout << j << " ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
        counter++;
    }
}

// 1 2 3 4 5
// 2     5
// 3   5
// 4 5
// 5
