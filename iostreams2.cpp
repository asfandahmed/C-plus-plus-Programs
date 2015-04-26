#include <iostream>
#include <conio.h>
#include <string>
#include <cstdlib>
using namespace std;
int isFeet(string);
class Distance
{
      private:
              int feet;
              float inches;
      public:
             Distance(): feet(0), inches(0.0)
             {}
             Distance(int ft, float in): feet(ft), inches(in)
             {}
             void showdist()
             {cout << feet << "\'-" << inches << '\"';}
             void getdist();
};
void Distance::getdist()
{
     string instr;
     while(1)
     {
             cout << "\n Enter feet: ";
             cin.unsetf(ios::skipws);
             cin >> instr;
             if(isFeet(instr))
             {
                            cin.ignore(10, '\n');
                            feet = atoi(instr.c_str());
                            break;
             }
             cin.ignore(10, '\n');
             cout << "Feet must be an integer less than 1000\n";
     }
     while(1)
     {
             cout << "\n Enter inches: ";
             cin.unsetf(ios::skipws);
             cin >> inches;
             if(inches >= 12.0 || inches <= 0.0)
             {
                       cout << "Inches must be between 0.0 and 11.99\n";
                       cin.clear(ios::failbit);
             }
             if(cin.good())
             {
                         cin.ignore(10, '\n');
                         break;
             }
             cin.clear();
             cin.ignore(10,'\n');
             cout << "Incorrect inches input\n";   
     }
}
int isFeet(string str)
{
    int strlen = str.size();
    if(strlen==0 || strlen>5)
    {return 0;}
    for(int j=0; j<strlen; j++){
    if( (str[j] < '0' || str[j] > '9') && str[j] != '-' )
    {return 0;}} //string is not correct feet
    double n = atof( str.c_str() ); //convert to double
    if( n<=999.0 || n>999.0 ) //is it out of range?
    {return 0;} 

    return 1;
}
int main()
{
    Distance d; //make a Distance object
    char ans;
    do
    {
    d.getdist(); //get its value from user
    cout << "\nDistance = ";
    d.showdist(); //display it
    cout << "\nDo another (y/n)? ";
    cin >> ans;
    cin.ignore(10, '\n'); //eat chars, including newline
    } while(ans != 'n');
    getch();
    return 0;
}
