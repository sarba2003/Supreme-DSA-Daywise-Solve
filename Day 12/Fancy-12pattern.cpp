#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Number" << endl;
    cin >> n;

    for (int row = 0; row < n; row++)
    {
        for (int j = 0; j < 2 * row + 1; j++)
        {
            if (j % 2 == 0)
            {
                cout << row + 1 << " ";
            }
            else
            {
                cout << "* ";
            }
        }

        cout << endl;
    }
}

// 1
// 2 * 2
// 3 * 3 * 3
// 4 * 4 * 4 * 4
// 5 * 5 * 5 * 5 * 5