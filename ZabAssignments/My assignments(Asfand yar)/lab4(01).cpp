/*
  1. Delcare 2 variables a, b   Assign values 8 , 10 respectively 

   Do the following operation in sequence 

   apply increament operator on a 

   apply decreament operator on b 

   apply compound * operator on a by value of b 
   
   increament the value of a 
   
   Put the result of "a" on console   with postfix decreament   operator 

   assign value of a to another variable c 

    put the result of "c" with prefix increament operator 
*/
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a=8, b=10, c;
    a++;
    b--;
    a *= b;
    a++;
    cout << a-- << endl;
    c=a;
    cout << ++c;
    getch();
    return 0;
}
