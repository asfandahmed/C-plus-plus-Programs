#include<iostream>
#include<conio.h>
using namespace std;
int x;          // global variable
int& setx();     //function declaration

int main()
{                // set x a value, using
    setx() = 92; // function on the left side
    cout << "x=" << x << endl;
    getch();
    return 0;
}
//-------------------------------------------------
int& setx()
{
     return x;    // returns a value to be modified
 }
