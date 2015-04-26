#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a;
    int b;
    char c;
    cout << "Enter first number:";
    cin >> a;
    cout << endl << "Enter operator:";
    cin >> c;
    cout << endl << "Enter second number:";
    cin >> b;
    switch(c)
    {
    case '+':
         cout << a+b;
         break;
    case '-':
         cout << a-b;
         break;
    case '*':
         cout << a*b;
         break;
    case '/':
         cout << a/b;
         break;
             }
    getch();
    return 0;
}
