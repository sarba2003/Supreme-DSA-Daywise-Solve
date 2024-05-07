#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter Your Number" << endl;
    cin >> num;
    double ans = 1;
    while (num != 0)
    {
        ans = ans * num;
        num--;
    }
    cout << ans << endl;
}
