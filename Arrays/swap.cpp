#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter First Number" << endl;
    cin >> a;
    int b;
    cout << "Enter Second Number" << endl;
    cin >> b;
    int temp = a;
    a = b;
    b = temp;
    cout << "After Swapping a = " << a << " b = " << b << endl;
    ;
}