#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int a =1;
    while(a<=10)
    {
                int b = a*a*a*a*a;
                cout << a << "\t" << b << endl;
                a++;
           }
    getch();
    return 0;
    }
