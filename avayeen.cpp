#include<iostream>
#include<conio.h>
using namespace std;
char ch;
int main()
{
    while(ch != '\r')
    {
    ch = getch();
    cin >> ch;   
    cout << ch;
}
    getch();
    return 0;
    
}
