#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int age[4];     //array 'age' of 4 ints
    for(int j=0; j<4; j++)
    {
    cout << "enter your age: ";
    cin >> age[j];
    }
    for(int j=0; j<4; j++)
    {
    cout << "you entered age: " << age[j] << endl;
    }
    getch();
    return 0;
       
}
