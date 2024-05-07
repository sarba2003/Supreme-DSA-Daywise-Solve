#include <iostream>
using namespace std;
int main()
{
    int num1;
    cout << "Enter Your First Number" << endl;
    cin >> num1;
    int num2;
    cout << "Enter Your Second Number" << endl;
    cin >> num2;
    if (num1 > num2)
    {
        cout << "The First Number is Big :" << num1 << endl;
    }
    else if (num1 == num2)
    {
        cout << "Both Numbers are Equal" << endl;
    }
    else
    {
        cout << "The Second Number is Big :" << num2 << endl;
    }
}
