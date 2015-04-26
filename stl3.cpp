#include <iostream>
#include <algorithm>
#include <conio.h>
using namespace std;
int arr[] = { 33, 22, 33, 44, 33, 55, 66, 77 };
int main()
{
    sort(arr, arr+8);
    for(int i=0; i<8; i++)
    {
         cout << arr[i] << endl;
     }
    getch();
    return 0;
}
