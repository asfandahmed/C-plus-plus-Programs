#include <fstream>
#include <iostream>
#include <conio.h>
using namespace std;
class person
{
      protected:
                char name[80];
                int age;
      public:
             void showData() //get person’s data
             {
             cout << "\n Name: " << name;
             cout << "\n Age: " << age;
             }
};
int main()
{
    person pers;
    ifstream infile("pers.dat", ios::binary);
    infile.read(reinterpret_cast<char*>(&pers), sizeof(pers));
    pers.showData();
    getch();
    return 0;
}
