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
            cout << "* ";
        }
        cout << endl;
    }
}