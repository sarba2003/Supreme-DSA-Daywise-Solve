#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "Enter The Year" << endl;
    cin >> year;
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        cout << "This Year is Leap Year" << endl;
    }
    else
    {
        cout << "This year is not a Leap Year" << endl;
    }
}