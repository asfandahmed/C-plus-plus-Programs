#include<iostream>
#include<conio.h>
using namespace std;
// inline function
inline float lbstokg(float pounds)
{
       return 0.453592 * pounds;
       }
int main()
{
    float lbs;
    cout << "Enter your weight in pounds: ";
    cin >> lbs;
    cout << "Your weight in kilograms is " << lbstokg(lbs);
    getch();
    return 0;
}
