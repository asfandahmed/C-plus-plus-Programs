/*

2. Declare the 2 variable a, b . Assign values 8 and 9 to both of variables and transform following into c++ equation 

   and evaluate the result. 

  
   [((a compound * operator by 3) less than equal to 30 ) OR  ( (b not equal 9))] 
           
              AND 
  
    [((b increament operator ) equal to 10) OR ((a compound % operator 3) equals to 2))]

*/
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a=8, b=9;
    bool c;
    c = (((a*=3)<=30) || (b!=9)) &&  (((b++)==10) || (a%=3)==2);
    cout<<c;
    getch();
    return 0;
}
