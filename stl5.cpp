#include <iostream>
#include <algorithm>
#include <conio.h>
using namespace std;
int src1[] = { 2, 3, 4, 6, 8 };
int src2[] = { 1, 3, 5 };
int dest[8];
int main()
{
    merge(src1, src1+5, src2, src2+3, dest);
     for(int i=0; i<8; i++)
    {
         cout << dest[i] << endl;
     }
    getch();
    return 0;
}
