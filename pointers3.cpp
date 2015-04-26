#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int array[5] = {1,2,3,4,5};
    for(int i=0; i<5; i++)
    {
            cout << *(array+i) << endl;
    }
    getch();
    return 0;
}
