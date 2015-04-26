#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
    int a, i;
    for(i=1; i<=10; i++)
    {
    a = i*i*i;
    cout << setw(4) << i << setw(6)<< a << endl;
     }
    getch();
    return 0;
}
