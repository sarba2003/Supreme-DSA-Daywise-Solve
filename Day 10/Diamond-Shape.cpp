
#include <iostream>
using namespace std;

void pyramid(int n)
{
    for (int row = 0; row < n; row++)
    {
       
        for (int col = 0; col < n - row - 1; col++)
        {
            cout << " ";
        }

        
        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}

void invertedPyramid(int n)
{
    for (int row = 0; row < n; row++)
    {

        for (int col = 0; col < row; col++)
        {
            cout << " ";
        }
        for (int col = 0; col < n - row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "Enter the Number" << endl;
    cin >> n;
    pyramid(n);
    invertedPyramid(n);
}