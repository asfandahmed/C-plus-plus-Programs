#include <iostream>
#include <algorithm>
#include <conio.h>
using namespace std;
int arr[] = { 33, 22, 33, 44, 33, 55, 66, 77 };
int main()
{
    int n = count(arr, arr+8, 33);
    cout << "There are " << n << " 33's in arr." << endl;
    getch();
    return 0;
}
