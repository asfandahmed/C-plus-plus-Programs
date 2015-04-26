#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    float f;
    const float g = 9.8;
    int m;
    
   
    cout << "Enter mass: ";
    cin >> m;
    f = m * g;
    cout << "F = " << f;
    
    getch();
    return 0;
}
