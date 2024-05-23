#include <iostream>
#include <cmath>
using namespace std;

int decimalToBinary(int num)
{
    int i = 0;
    double ans = 0;
    //This is another approach
    //---------------------------------
    // while(num!=0){
    //     int bit = num%2;
    //     ans = bit * pow(10,i)+ans;
    //     i++;
    //     num = num/2;

    // }
    // return ans ;
    //---------------------------------
    while (num != 0)
    {
        int bit = num & 1;
        ans = ans + bit * pow(10, i);
        i++;
        num = num >> 1;
    }
    return ans;
}
int main()
{
    int num;
    cout << "Enter your Number" << endl;
    cin >> num;

    int result = decimalToBinary(num);
    cout << result << endl;
}