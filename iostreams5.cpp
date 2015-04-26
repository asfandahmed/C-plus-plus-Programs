#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;
class person
{
      protected:
                char name[80];
                int age;
      public:
             void getData()
             {
                  cout << "\n Enter name: "; cin >> name;
                  cout << " Enter age: "; cin >> age;    
             }
             void showData()
             {
                  cout << "\n Name: " << name;
                  cout << "\n Age: " << age;
             }
};

int main()
{
char ch;
person pers; //create person object
fstream file; //create input/output file
//open for append
file.open("GROUP.DAT", ios::app | ios::out |
ios::in | ios::binary );
do //data from user to file
{
cout << "\nEnter person’s data:";
pers.getData(); //get one person’s data
//write to file
file.write( reinterpret_cast<char*>(&pers), sizeof(pers) );
cout << "Enter another person (y/n)? ";
cin >> ch;
}
while(ch=='y'); //quit on ‘n’
file.seekg(0); //reset to start of file
//read first person
file.read( reinterpret_cast<char*>(&pers), sizeof(pers) );
while( !file.eof() ) //quit on EOF
{
cout << "\nPerson:"; //display person
pers.showData(); //read another person
file.read( reinterpret_cast<char*>(&pers), sizeof(pers) );
}
cout << endl;
    getch();
    return 0;
}
