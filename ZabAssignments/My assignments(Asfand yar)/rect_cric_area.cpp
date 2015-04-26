#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    float length;
    float breath;
    float radius;
    float area_of_rect;
    float peri_of_rect;
    float area_of_cric;
    float circum_of_cric;
    const float PI = 3.1415;
    
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter breath: ";
    cin >> breath;
    cout << "Enter radius";
    cin >> radius;
    
    area_of_rect = length * breath;
    peri_of_rect = 2*(length + breath);
    area_of_cric = PI * radius * radius;
    circum_of_cric = 2 * PI * radius;
    
    cout << "Area of rectangle: " << area_of_rect;
    cout << "Perimeter of rectangle: " << peri_of_rect;
    cout << "Area of Circle: " << area_of_cric;
    cout << "Circumference of Circle: " << circum_of_cric;
    
    getch();
    return 0;
}
