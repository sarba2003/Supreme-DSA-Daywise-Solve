#include <iostream>
using namespace std;

int checkPrime(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int num;
    cout << "Enter your Number" << endl;
    cin >> num;
    if (checkPrime(num))
    {
        cout << "This ia a Prime Number" << endl;
    }
    else
    {
        cout << "This is not a prime Number" << endl;
    }
}