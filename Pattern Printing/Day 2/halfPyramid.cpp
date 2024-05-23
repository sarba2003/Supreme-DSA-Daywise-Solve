#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Number" << endl;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < 1 + row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
