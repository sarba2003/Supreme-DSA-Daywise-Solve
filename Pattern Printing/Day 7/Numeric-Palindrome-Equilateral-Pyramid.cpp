#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of levels for the pyramid: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        // Print leading spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "  ";
        }

        // Print increasing sequence
        for (int j = 1; j <= i + 1; j++)
        {
            cout << j << " ";
        }

        // Print decreasing sequence
        for (int j = i; j > 0; j--)
        {
            cout << j;
            if (j > 1)
            {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}

//         1
//       1 2 1
//     1 2 3 2 1
//   1 2 3 4 3 2 1
// 1 2 3 4 5 4 3 2 1