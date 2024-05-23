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
        for (int col = 0; col <= row; col++)
        {
            cout << counter << " ";
        }
        cout << endl;
        counter++;
    }
}