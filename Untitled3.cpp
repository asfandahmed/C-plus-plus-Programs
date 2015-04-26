#include <iostream>
#include <conio.h>
using namespace std;
struct Time
{
       int secs;
       int mins;
       int hours;
       };
int main()
{
    Time time1;
    char dchar;
    int total = 0;
    cout << "Enter date: ";
    cin >>time1.hours>> dchar >> time1.mins >> dchar >> time1.secs;
    total = time1.secs+(60*time1.mins)+(60*60*time1.hours);
    cout << endl << "Total number of seconds are: " <<total;
    getch();
    return 0;
}
