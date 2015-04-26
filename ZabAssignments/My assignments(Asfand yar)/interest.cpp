#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    float time, rate, principle, interest;
    cout << "Enter rate(space)principle(space)time:";
    cin >> rate >> principle >>time;
    interest = principle * rate/100 * time;
    cout << "Interest got " << interest << " per year.";
    getch();
    return 0;
}
