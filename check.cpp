#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int size, i;
    cin>>size;
    int a[size];
    for(i=0; i<size; i++)
    {
             a[i] = i;
    }
    for(i=0; i<size; i++)
    {
             cout << a[i] << endl;
    }
    getch();
    return 0;
}
