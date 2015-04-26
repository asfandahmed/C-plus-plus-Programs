#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a;
    int b;
    char c;
    do{
    cout << "Enter first number:";
    cin >> a;
    cout << endl << "Enter operator:";
    cin >> c;
    cout << endl << "Enter second number:";
    cin >> b;
    switch(c)
    {
    case '+':
         cout << a+b << endl;
         break;
    case '-':
         cout << a-b << endl;
         break;
    case '*':
         cout << a*b << endl;
         break;
    case '/':
         cout << a/b << endl;
         break;
             }
             cout << "do another ? (y/n) : ";
             cin >>c;
}while(c!='n');
    getch();
    return 0;
}
