#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int sp;
    int totl_num_itm;
    int per;
    float cp;
    float c_of_1itm;
    cout << "Enter selling price(space)total number of items(space)profit percentage: ";
    cin >> sp >> totl_num_itm >> per;
    cp = sp-(sp*per/100);
    cout << "Cost price of " << totl_num_itm <<" is "<< cp << endl;
    c_of_1itm = cp/totl_num_itm;
    cout << "Cost of 1 item is " << c_of_1itm;
    getch();
    return 0;
}
