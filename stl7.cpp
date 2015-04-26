#include <iostream>
#include <conio.h>
#include <functional>
#include <algorithm>
using namespace std;
double fdata[] = { 19.2, 87.4, 33.6, 55.0, 11.5, 42.2 };

int main()
{
    sort(fdata, fdata+6, greater<double>());
    for(int j=0; j<6; j++) //display sorted doubles
            cout << fdata[j] << ' ';
    cout << endl;
    getch();
    return 0;
}
