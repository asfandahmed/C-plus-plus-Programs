#include <iostream>
#include <conio.h>
using namespace std;
void centimize(double*);
int main()
{
     double var =  10.0;
    cout << "inches: " << var <<endl;
    centimize(&var);
    cout << "centimeters: " << var <<endl;
    getch();
    return 0;
}
void centimize(double* v)
{
    *v *= 2.54; 
}
