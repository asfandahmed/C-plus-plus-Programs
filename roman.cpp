#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int value[5];
    char str[5];
    int total = 0;
    cout<<"Enter a Roman value: ";
    cin.get(str,5,'\n');
    for(int i = 0; i<strlen(str); i++)
    {
            switch (str[i])
            {
                   case 'I':
                   value[i] = 1;
                   break;
                   case 'V':
                   value[i] = 5;
                   break;
                   case 'X':
                   value[i] = 10;
                   break;
                   case 'L':
                   value[i] = 50;
                   break;
                   case 'C':
                   value[i] = 100;
                   break;
                   case 'D':
                   value[i] = 500;
                   break;
                   case 'M':
                   value[i] = 1000;
                   break;
                   case 'i':
                   value[i] = 1;
                   break;
                   case 'v':
                   value[i] = 5;
                   break;
                   case 'x':
                   value[i] = 10;
                   break;
                   case 'l':
                   value[i] = 50;
                   break;
                   case 'c':
                   value[i] = 100;
                   break;
                   case 'd':
                   value[i] = 500;
                   break;
                   case 'm':
                   value[i] = 1000;
                   break;
                   }
            total = total + value[i];
    }
    for(int i=0; i<(strlen(str)-1); i++)
    {
         if(value[i] < value[i+1])
         total = total - 2 * value[i];
                             

         
     }
    cout << endl << total;
    getch();
    return 0;
}
 
