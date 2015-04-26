#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int array[] = {1,2,3,4,5};
    int* ptr;
    ptr =  array;
    for(int i=0; i<5; i++)
    cout << *(ptr++) << endl;
    getch();
    return 0;
}
