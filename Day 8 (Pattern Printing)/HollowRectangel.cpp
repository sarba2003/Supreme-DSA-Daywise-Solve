#include <iostream>
using namespace std;
int main()
{
    int width;
    cout << "Enter the Width" << endl;
    cin >> width;
    int height;
    cout << "Enter the Height" << endl;
    cin >> height;
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (i == 0 || i == height - 1 || j == 0 || j == width - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}