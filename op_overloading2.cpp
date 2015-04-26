// increment counter variable with ++ operator
// uses unnamed temporary object
#include <iostream>
#include <conio.h>
using namespace std;
class Counter
{
      private:
              unsigned int count;
      public:
             Counter() : count(0)
             {
             }
             Counter(int a): count(a)
             {
             }
             unsigned int get_count()
             {
                      return count;
             }
             Counter operator ++ ()
             {
                     ++count;
                     return Counter(count);
             }
};
int main()
{
    Counter c1, c2;
    cout << "c1 = " << c1.get_count() << endl;
    cout <<  "c2 = "  << c2.get_count() << endl;
    ++c1;
    c2 = ++c1;
    cout <<  "c1 = "  << c1.get_count() << endl;
    cout <<  "c2 = "  << c2.get_count() << endl;
    getch();
    return 0;
}
