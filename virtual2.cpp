#include <iostream>
#include <conio.h>
using namespace std;
class person
{
      protected:
                char name[40];
      public:
             void getName()
             {cout << " Enter name: "; cin >> name;}
             void putName()
             {cout << "Name is: " << name << endl;}
             virtual void getData() = 0;
             virtual bool isOutstanding() = 0;
};
class student: public person
{
      private:
              float gpa;
      public:
             void getData()
             {
                  person::getName();
                  cout << "Enter studentís GPA: "; cin >> gpa;
             }
             bool isOutstanding()
             {
                  return (gpa > 3.5) ? true : false;
             }      
};
class professor : public person
{
      private:
               int numPubs;
      public:
             void getData()
             {
                  person::getName();
                  cout << "Enter number of professorís publications: "; cin >> numPubs;
             }
             bool isOutstanding()
             {
                  return (numPubs > 100) ? true : false;             
             }
};
int main()
{
    person* persPtr[100];
    int n=0;
    char choice;
    do{
         cout << "Enter student or professor (s/p): ";
         cin >> choice;
         if(choice=='s')
         persPtr[n] = new student;
         else
         persPtr[n] = new professor;
         persPtr[n++]->getData();
         cout << " Enter another (y/n)? ";//do another person?
         cin >> choice;
       }while(choice=='y');
    for(int i=0; i<n; i++)
    {
            persPtr[i]->putName(); //say if outstanding
            if( persPtr[i]->isOutstanding() )
            cout << " This person is outstanding\n";
            }
    getch();
    return 0;
}
