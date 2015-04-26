/*write a c++ program which generates Fibonacci number series
and range  of Fibonacci numbers should not exceed than 75025;
Use While Loop*/ 

#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int a=0, b=1, sum;
    while(a<=28657)
    {
                   sum=a+b;
         cout << sum << "\t" ;
         a=b;
         b=sum;
     }
    getch();
    return 0;
}
