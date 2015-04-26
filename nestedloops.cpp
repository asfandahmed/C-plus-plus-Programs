#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a=0,j=4,i;
    for(i=1; i<=22; i++)
    {
            for(i=i; i<=j; i++)
            {
             cout << i << " ";
             a += i;            
            }
            cout<<" = "<<a<<endl;
            a=0;
            j++;
            i-=4;
     }
    getch();
    return 0;
}
