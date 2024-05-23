#include <iostream>
using namespace std;
int main()
{
    int num1;
    cout << "Enter the First Number" << endl;
    cin >> num1;
    int num2;
    cout << "Enter the Second Number" << endl;
    cin >> num2;

    int mask = num1;

    num1 = num2;
    num2 = mask;
    cout << "Swap of Two Number Done!!!! " << endl;
    cout << "First Number is : " << num1 << endl;
    cout << "Second Number is : " << num2 << endl;
}