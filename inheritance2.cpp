#include <iostream>
#include <conio.h>
using namespace std;
const int LEN = 80;
class employee
{
      public:
              char name[LEN];
              unsigned long number;
      
             void getdata()
             {
                  cout << "\n Enter last name: "; cin >> name;
                  cout << " Enter number: "; cin >> number;
             }
             void putdata()
             {
                  cout << "\n Name: " << name;
                  cout << "\n Number: " << number;
             }
};
class manager : public employee
{
       public:
              char title[LEN];
              double dues;
      
              void getdata()
              {
              getdata();
              cout << " Enter title: "; cin >> title;
              cout << " Enter golf club dues: "; cin >> dues;
              }
              void putdata() const
              {
              putdata();
              cout << "\n Title: " << title;
              cout << "\n Golf club dues: " << dues;
              }
};
class scientist : public employee
{
      public: 
              int pubs; 
   
             void getdata()
             {
             getdata();
             cout << " Enter number of pubs: "; cin >> pubs;
             }
             void putdata() const
             {
             putdata();
             cout << "\n Number of publications: " << pubs;
             }
};
class laborer : public employee 
{
};
int main()
{
    manager m1, m2;
    scientist s1;
    laborer l1;
    cout << endl; 
    cout << "\nEnter data for manager 1";
    m1.getdata();
    cout << "\nEnter data for manager 2";
    m2.getdata();
    cout << "\nEnter data for scientist 1";
    s1.getdata();
    cout << "\nEnter data for laborer 1";
    l1.getdata();

    cout << "\nData on manager 1";
    m1.putdata();
    cout << "\nData on manager 2";
    m2.putdata();
    cout << "\nData on scientist 1";
    s1.putdata();
    cout << "\nData on laborer 1";
    l1.putdata();
    cout << endl;
    getch();
    return 0;
}
