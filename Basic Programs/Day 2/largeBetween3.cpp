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
    int num3;
    cout << "Enter Your Third Number" << endl;
    cin >> num3;
    if (num1 > num2 && num1 > num3)
    {
        cout << "The First number is large : " << num1 << endl;
    }
    else if (num2 > num1 && num2 > num3)
    {
        cout << "The Second Number is Large : " << num2 << endl;
    }
    else if (num3 > num1 && num3 > num2)
    {
        cout << "The Third Number is Large : " << num3 << endl;
    }
    else
    {
        cout << "All Three Are Same" << endl;
    }
}