#include <iostream>
#include <conio.h>
using namespace std;
const int ROWS = 10;
const int COLS = 5;
const int HEIGHT = 25;
int main()
{
    int count, j, k;
    char* ptr[ROWS];
    char* temp;
    static char pict[ROWS][COLS] = {
                                        {0,     0,      0,      0,      0},
                                        {0,     0,      0,      0,      0},
                                        {0,     0,      0,      0,      0},
                                        {0,     0,      0,      0,      0},
                                        {0,     0,      0,      0,      0},
                                        {0,     0,      0,      0,      0},
                                        {0,     0,      0,      0,      0},
                                        {0,     0,      0,      0,      0},
                                        {0,     0,      '\x1E',   0,      0},
                                        {0,     '\x1E',      '\xDB',      '\x1E',      0}
                                   };
    static char gnd[] = {'\xCD','\xCD','\xCD','\xCD','\xCD',0};
    for(count=0; count<ROWS; count++)
    {
                 *(ptr+count) = *(pict+count);
    }
    for(count=0; count<ROWS-1; count++)
    {
                 for(j=0; j<HEIGHT-ROWS; j++)
                 {
                  cout << endl;
                  }
                  for(j=0; j<ROWS; j++)
                  {
                           cout<<"\t\t\t";
                       for(k=0; k<COLS; k++)
                       {
                                
                               cout << *(*(ptr+j)+k);
                               
                       }
                       cout << endl;
                  }
                  cout << "\t\t\t" << gnd;
                  
                  
                  temp = *ptr;
                  for(j=0; j<ROWS-1; j++)
                  *(ptr+j) = *(ptr+j+1);
                  *(ptr+ROWS-1) = temp;
                  getch();
         
    }
    getch();
    return 0;
}
