#include<iostream>
#include<conio.h>
using namespace std;

float circarea(float);  //declaration

int main()
{
    float rad;
    cout << "Enter radius of a circle: ";
    cin >> rad;
    cout << circarea(rad);
    getch();
    return 0;
}
float circarea(float r)
{
      return 3.1415 * r * r;
      }
