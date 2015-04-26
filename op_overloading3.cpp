// overloaded ++ operator in both prefix and postfix
#include <iostream>
#include <conio.h>
using namespace std;
class Counter
{
      private:
              unsigned int count;
      public:
             Counter(): count(0)
             {
             }
             unsigned int get_count()
             {
                      return count;
             }
             void operator ++()
             {
                  ++count;
              }
             void operator ++(int)
             {
                  count++;
              }
};
int main()
{
    Counter c1, c2;
    cout << "c1 = " << c1.get_count() << endl;
    cout <<  "c2 = "  << c2.get_count() << endl;
    ++c1;
    c2++;
    cout << "c1 = " << c1.get_count() << endl;
    cout <<  "c2 = "  << c2.get_count() << endl;
    getch();
    return 0;
}
