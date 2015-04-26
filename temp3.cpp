#include <iostream>
#include <conio.h>
using namespace std;
template <class Type>
struct link
{
       Type data;
       link* next;
};
////////////////////////
template <class Type>
class linklist
{
      private:
              link<Type>* first;
      public:
             linklist()
             {first = NULL; }
             void additem(Type d);
             void display();
};
template <class Type>
void linklist<Type>::additem(Type d)
{
     link <Type>* newlink = new link<Type>;
     newlink->data = d;
     newlink->next = first;
     first = newlink;
}
template <class Type>
void linklist<Type>::display()
{
     link<Type>* current = first;
     while(current!=NULL)
     {
                         cout << endl << current->data;
                         current = current->next;
     }
}
int main()
{
    linklist<double> ld; //ld is object of class linklist<double>
    ld.additem(151.5); //add three doubles to list ld
    ld.additem(262.6);
    ld.additem(373.7);
    ld.display(); //display entire list ld
    linklist<char> lch; //lch is object of class linklist<char>
    lch.additem('a'); //add three chars to list lch
    lch.additem('b');
    lch.additem('c');
    lch.display(); //display entire list lch
    cout << endl;
    getch();
    return 0;
}
