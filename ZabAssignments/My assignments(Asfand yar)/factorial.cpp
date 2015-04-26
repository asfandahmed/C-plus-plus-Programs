#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a, fact=1;
    cout << "enter number: ";
    cin >> a;
    for(int i=a; i>=1; i--)
    {
     fact= fact*i; 
            }
    cout << "factorial: " <<fact;
    getch();
    return 0;
}
