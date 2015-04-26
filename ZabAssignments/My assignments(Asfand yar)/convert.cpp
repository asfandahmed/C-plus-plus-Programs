#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    float km;   // a variable defined for user input in kilometers
    float inches;  //variable for inches
    float feet;    //variable for feet 
    float meters;  //variable for meters
    cout << "Enter your distance kilometers: ";      // output statement
    cin >> km;
    
    meters = 1000 * km;
    feet = meters * 3.2;
    inches = feet * 12;
    cout << "Distance in meters is " << meters << endl;
    cout << "Distance in feet is " << feet << endl;
    cout << "Distance in inches is " << inches;
    getch();
    return 0;
}
