#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int cost_per_juice = 70;
    int quantity;
    cout << "Enter quantity of juice: ";
    cin >> quantity;
    
    int total = cost_per_juice*quantity;
    float pr = total*10/100;
    
    if(quantity>100)
    {
    cout << total-pr;
                    }
    else
    {
        cout << total;
    }
    getch();
    return 0;
}
