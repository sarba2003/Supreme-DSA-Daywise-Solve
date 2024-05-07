#include <iostream>
using namespace std;
int main()
{
    int principle, rateOfInterest, time;
    cout << "Enter The Principle Amount" << endl;
    cin >> principle;
    cout << "Enter The Rate Of Interst Percentage Per Annum" << endl;
    cin >> rateOfInterest;
    cout << "Enter The Time In Years" << endl;
    cin >> time;
    int simpleInterest = (principle * rateOfInterest * time) / 100;
    cout << "Simple Interest Of The Given Data is : " << simpleInterest << endl;
}