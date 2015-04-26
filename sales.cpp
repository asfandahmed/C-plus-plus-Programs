#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    const int SIZE = 6;     //size of array
    double sales[SIZE];     //array of 6 variables
    
    cout << "enter sales for 6 days\n";
    for(int j=0; j<SIZE; j++)
    {
            cin >> sales[j];
            }
    double total = 0;
    for(int i=0; i<SIZE; i++)
    {
             total += sales[j];
             double average = total/SIZE;
             cout << "average is " << average << endl;
             }
}
