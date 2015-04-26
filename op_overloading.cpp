// increment counter variable with ++ operator, return value
#include <iostream>
#include <conio.h>
class Counter
{
      private:
      unsigned int count;
      public:
      Counter() : count(0)
      {
      }
      unsigned int get_count()
      {
               return count;
      }
      Counter operator ++ ()
      {
          ++count;
          Counter temp;
          temp.count = count;
          return temp;
      }
};
using namespace std;
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
