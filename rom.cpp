#include <iostream>
#include <conio.h>
#include "dos.h"
#define VIDEO 0x12
using namespace std;
struct WORDREGS
{
       unsigned int ax;
       unsigned int bx;
       unsigned int cx;
       unsigned int dx;
       unsigned int si;
       unsigned int di;
       unsigned int flags;
       };
struct BYTEREGS
{
       unsigned char al, ah;
       unsigned char bl, bh;
       unsigned char cl, ch;
       unsigned char dl, dh;
};
union REGS
{
      struct WORDREGS x;
      struct BYTEREGS h;
};

int main()
{
    union REGS regs;
    int size;
    int86(VIDEO, &regs, &regs);
    size = regs.x.ax;
    cout << size;
    getch();
    return 0;
}
