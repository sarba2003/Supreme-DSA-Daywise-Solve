#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter Your Number" << endl;
    cin >> num;
    int sum = 0;

    while (num != 0)
    {
        int digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }
    cout <<"Sum Of The Given Number is : "<< sum << endl;
}