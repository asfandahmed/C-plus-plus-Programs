#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    float a1 , a2;
    char d1, d2;
    float b1 , b2;
    float result=0;
    cout << "Enter first fraction: ";
    cin>>a1>>d1>>a2;
    cout<<endl;
    cout << "Enter Second fraction: ";
    cin>>b1>>d2>>b2;
    result  = ((a1*b2)+(a2*b1))/(a2*b2);
    cout << "sum of fraction is: " << result;
    getch();
    return 0;
}
