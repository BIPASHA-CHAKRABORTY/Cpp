#include <iostream>
#include<cmath>
using namespace std;

int main() 
{
    double principal, rate, time, interest;

    cout << "Enter the principal amount: ";
    cin >> principal;
    cout << "Enter the rate of interest (in %): ";
    cin >> rate;
    cout << "Enter the time period (in years): ";
    cin >> time;
    interest = principal*time*rate;
    cout << "The simple interest is: " << interest;
    return 0;
}
