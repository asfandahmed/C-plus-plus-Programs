/*2. write a c++ program which generate series upto
 500 numbers without those odd numbers which are exactly
  divisible by "3".Use while as well do while loop.*/
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int a, b=2, c;
    for(a=0; a<250; a+=2)
    {    c=a+1;    
        if(c%3==0)
        {
                  continue;
                  }
        else{
        cout << c << endl;
        }
       }
    getch();
    return 0;
}
