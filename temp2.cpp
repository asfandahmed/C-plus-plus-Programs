#include <iostream>
#include <conio.h>
using namespace std;
const int MAX = 100;
template <class Type>
class Stack
{
      private:
              Type st[MAX];
              int top;
      public:
             Stack()
             {top = -1;}
             void push(Type var)
             {st[++top] = var;}
             Type pop()
             {return st[top--];}
};
int main()
{
    Stack<float> s1;
    s1.push(113.1F);
    s1.push(999.99F);
    s1.push(80.2F);
    cout << "1: " << s1.pop() << endl;
    cout << "2: " << s1.pop() << endl;
    cout << "3: " << s1.pop() << endl;
    Stack<long> s2;
    s2.push(4564645L);
    s2.push(70000L);
    s2.push(465888L);
    cout << "1: " << s2.pop() << endl;
    cout << "2: " << s2.pop()<< endl;
    cout << "3: " << s2.pop() << endl;
    getch();
    return 0;
}
