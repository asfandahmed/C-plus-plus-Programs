#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
const int DISTRICTS = 4;
const int MONTHS = 3;
int main()
{
    //system("TITLE Welcome");
    int d, m;
    double sales[DISTRICTS][MONTHS];
    for(d=0; d<DISTRICTS; d++)
    {
             for(m=0; m<MONTHS; m++)
             {
                      cout << "Enter sales for district " << d+1;
                      cout << ", month " << m+1 << ": ";
                      cin >> sales[d][m];
              }
             }
             cout << "\n\n";
             cout <<"\t\t month\n";
             cout << "\t\t 1 \t 2 \t 3 \n";
    for(d=0; d<DISTRICTS; d++)
    {
             cout << "district" << d+1;
             for(m=0; m<MONTHS; m++)
             {
                      cout << setiosflags(ios::fixed);
                      cout << setiosflags(ios::showpoint);
                      cout << setprecision(2) << setw( 10 );
                      cout << sales[d][m];
                      }
             cout <<endl;
             }
    getch();
    return 0;
}
