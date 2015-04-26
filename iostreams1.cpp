#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int i;
    while(true) // cycle until input OK
    {
    cout << "\nEnter an integer: ";
    cin >> i;
    if( cin.good() ) // if no errors
    {
    cin.ignore(10, '\n'); // remove newline
    break; // exit loop
    }
    cin.clear(); // clear the error bits
    cout << "Incorrect input";
    cin.ignore(10, '\n'); // remove newline
    }
    cout << "integer is " << i;
    getch();
    return 0;
}
