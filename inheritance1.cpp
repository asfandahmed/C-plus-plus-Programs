#include <iostream>
#include <conio.h>
using namespace std;
class Counter
{
      protected:
                unsigned int count;
      public:
             Counter(): count(0)
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
                  return Counter(++count);
             }
};
class CountDn : public Counter
{
   public:
          CountDn(): Counter()
          {}
          CountDn(int a): Counter(a)
          {} 
          Counter operator -- ()
          {
                  return Counter(--count);
          }   
};
int main()
{
    CountDn c1; //class CountDn
    CountDn c2(100);
    cout << "\nc1=" << c1.get_count(); //display
    cout << "\nc2=" << c2.get_count(); //display
    ++c1; ++c1; ++c1; //increment c1
    cout << "\nc1=" << c1.get_count(); //display it
    --c2; --c2; //decrement c2
    cout << "\nc2=" << c2.get_count(); //display it

    cout << endl;
    getch();
    return 0;
}
