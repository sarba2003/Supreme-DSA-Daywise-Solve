#include <iostream>
using namespace std;
int main()
{
    int startingNum, commonDiff, numsofTerms;
    cout << "Enter the Starting Term" << endl;
    cin >> startingNum;
    cout << "Enter the Number of Terms" << endl;
    cin >> numsofTerms;
    cout << "Enter the Common Difference" << endl;
    cin >> commonDiff;
    for (int i = 0; i < numsofTerms; i++)
    {
        int nextnum = startingNum;
        cout << nextnum << endl;
        startingNum += commonDiff;
    }
}