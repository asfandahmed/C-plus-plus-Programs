#include <iostream>
#include <list>
#include <conio.h>
using namespace std;
int main()
{
    list<int> ilist;
    ilist.push_back(30);
    ilist.push_back(40);
    ilist.push_front(20);
    ilist.push_front(10);
    int size = ilist.size();
    for(int j=0; j<size; j++)
    {
    cout << ilist.front() << ' '; //read item from front
    ilist.pop_front(); //pop item off front
    }
    cout << endl;
    getch();
    return 0;
}
