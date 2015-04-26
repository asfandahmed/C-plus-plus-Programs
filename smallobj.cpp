#include<iostream>
#include<conio.h>
using namespace std;
///////////////////////
class smallobj         //declare a class
{
      private:
              int somedata; //class data
      public:
             void setdata(int d)    //member function to set data
             {
                  somedata = d;
              } 
             void showdata()        //member function to display data
             {
                  cout << "Data is " << somedata << endl; 
              }
      };
//////////////////////////////////////////////////////////////////////
int main()
{
    smallobj s1, s2;     //define two objects of class smallobj
    s1.setdata(1066);    //call member function to set data
    s2.setdata(1776);
    s1.showdata();       //call member function to show data
    s2.showdata();
    getch();
    return 0;
}
