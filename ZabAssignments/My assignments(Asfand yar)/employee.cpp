#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    short crr_year;
    short j_year;
    int salary;
    short bonus = 2500;
    cout << "Enter joined year: ";
    cin >> j_year;
    cout << endl  << "Enter current year: ";
    cin >> crr_year;
    cout << endl << "Enter salary: ";
    cin >> salary;
    if(crr_year>j_year+3)
    {
    cout << "congratz! you have got bonus of 2500 and your current salary is: " << salary + bonus;
    }
    else
    {
        cout << salary;
    }
    getch();
    return 0;
}
