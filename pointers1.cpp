#include <iostream>
#include <conio.h>
using namespace std;
int main()
{

    int a = 0;
    int b = 12;
    int c = 13;
    cout <<&a<<endl;
    cout <<&b<<endl;
    cout <<&c<<endl;
    int* ptr;
    ptr = &a;
    cout << ptr << endl;
    ptr = &b;
    cout << *ptr << endl;
    getch();
    return 0;
}
