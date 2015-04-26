#include <iostream>
#include <conio.h>
using namespace std;
void centimize(double*);
int main()
{
    double array[] = {12.5,54.15,10.0,5.0,8.0};
    centimize(array);
    for(int i=0; i<5; i++)
    cout << array[i] <<endl;
    getch();
    return 0;
}
void centimize(double* ptr)
{
     *ptr++ *= 2.54;
}
