#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<ctime>
using namespace std;
unsigned short rMark()
{
    // short num;
     return 0 + rand() % 8;
}
int main()
{
    srand(time(0));
    int a = 0 + rand() % 8;
    cout<< rMark();
    getch();
    return 0;
}
