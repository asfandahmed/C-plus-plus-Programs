#include <iostream>
#include <conio.h>
#include <cstring>

using namespace std;
void reverse()
{
     char string[17];
    for(int i=0; i<strlen(string); i++)
    {
           cin.get(string[i]);
           if(string[i]=='\n')
           string[++i] = 0 ;      

    }
    for(int j=strlen(string); j>=0; j--)
    {
            cout<<string[j];
            }
 }

int main()
{
    reverse();
    getch();
    return 0;
}
