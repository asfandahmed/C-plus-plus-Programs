#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
  int  x=3;
  int y=23;
  int z=0;
bool b1 = ((x*=6)>17) && ((z--)==7);
bool b2 = ((++x)<10)&&((z/y)==0);
bool b3 = b1 && b2;
bool b4 = b3;
cout << b4;
    getch();
    return 0;
}
