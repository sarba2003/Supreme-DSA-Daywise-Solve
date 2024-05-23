#include <iostream>
using namespace std;
int main()
{
    int row, column;
    cout << "Enter The Number of Rows" << endl;
    cin >> row;
    cout << "Enter the Number Of Columns" << endl;
    cin >> column;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}