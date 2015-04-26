#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;
class String
{
      private:
              enum{ SZ=80 };
              char str[SZ];
      public:
             String()
             {
                     strcpy(str, "");
             }
             String(char s[])
             {
                     strcpy(str, s);
             }
             void display() const
             {
                  cout << str;
             }
             String operator + (String ss) const
             {
                    String temp;
                    if(strlen(str) + strlen(ss.str) < SZ)
                    {
                                   strcpy(temp.str, str);
                                   strcat(temp.str, ss.str);
                    }
                    else
                    {
                        cout << "\nString overflow"; exit(1);
                    }
                    return temp;
             }
             
              
};
int main()
{
   String s1 = "\nMerry Christmas! "; //uses constructor 2
   String s2 = "Happy new year!"; //uses constructor 2
   String s3; //uses constructor 1
   s1.display(); //display strings
   s2.display();
   s3.display();
   s3 = s1 + s2; //add s2 to s1,
                 //assign to s3
   s3.display(); //display s3
   cout << endl;
    getch();
    return 0;
}
