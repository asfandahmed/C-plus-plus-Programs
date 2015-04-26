#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a;
    int b;
    
    cout << "Value for a "; cin >> a; cout << endl;
    cout << "Value for b "; cin >> b; cout << endl;
    int temp = a;
    a = b;
    b = temp;
    cout << "Now value of a is " << a << endl;
    cout << "Now value of b is " << b;
    getch();
    return 0;
}
