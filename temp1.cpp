#include <iostream>
#include <conio.h>
using namespace std;
template <class T>
T abs(T n)
{
        return (n<0) ? -n : n;
}
int main()
{
    int one = 5;
    int two = -6;
    long three = 70000L;
    long four = -800000L;
    double five = 5.0;
    double six = -6.66;
    cout << "\nabs(" << one << ")=" << abs(one); //abs(int)
    cout << "\nabs(" << two << ")=" << abs(two); //abs(int)
    cout << "\nabs(" << three << ")=" << abs(three); //abs(long)
    cout << "\nabs(" << four << ")=" << abs(four); //abs(long)
    cout << "\nabs(" << five << ")=" << abs(five); //abs(double)
    cout << "\nabs(" << six << ")=" << abs(six); //abs(double)
    getch();
    return 0;
}
