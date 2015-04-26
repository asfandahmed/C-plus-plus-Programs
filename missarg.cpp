#include<iostream>
#include<conio.h>
using namespace std;

void repchar(char='*', int=45); // declaration with default arguments

int main()
{
    repchar();
    repchar('=');
    repchar('+',30);
    getch();
    return 0;
}
void repchar(char ch, int n)
{
     for(int j=0; j<n; j++)
     cout << ch;
 }
