#include <iostream>
#include <cmath>
using namespace std;
int binaryToDecimal(int num)
{
    int i = 0;
    int ans = 0;
    while (num != 0)
    {
        int digit = num % 10;
        if (digit == 1)
        {
            ans = ans + pow(2, i);
        }
        i++;
        num = num / 10;
    }
    return ans;
}

int main()
{
    int num;
    cout << "Enter your Binary Number" << endl;
    cin >> num;
    int result = binaryToDecimal(num);
    cout << result << endl;
}
