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
             void getData() //get person’s data
             {
             cout << "Enter name: "; cin >> name;
             cout << "Enter age: "; cin >> age;
             }
            
};
int main()
{
    person pers;
    pers.getData();
    ofstream os("pers.dat", ios::binary);
    os.write(reinterpret_cast<char*>(&pers), sizeof(pers));
    
    getch();
    return 0;
}
