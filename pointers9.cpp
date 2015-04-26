#include <iostream>
#include <conio.h>
using namespace std;
class Distance
{
      private:
              int feet;
              float inches;
      public:
             void getdist()
             {
                  cout << "\nEnter feet: "; cin >> feet;
                  cout << "Enter inches: "; cin >> inches;
             }
             void showdist()
             {
                  cout << feet << "\'-" << inches << '\"';
             }
};
int main()
{
    Distance dist;
    dist.getdist();
    dist.showdist();
    Distance* ptr;
    ptr = new Distance;
    ptr->getdist();
    ptr->showdist();
    getch();
    return 0;
}
