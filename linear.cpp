/*
 i think your were confused about returning values so i wrote
  this code for you rather than searching on the internet coz it was little bit time consuming for me.
  i hope this program will clear your idea about linear search.
*/
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int input; // this will get input from user
    int array[100]; // an array that contains 100 integer values
    // now storing values in array 
    for(int i = 0; i < 100; i++) // loop for storing values using loop here because loops and arrays go hand in hand
    {
            array[i] = i * 2; // here i*2 will generate a number and that number will be stored in an array
     } // loop ends here now array contains some values
     
/////////////////////////////////////////////////////////////////////////////////////////////////////////

     cout << "Enter a number: ";
     cin >> input; // gets a user input
     
/////////////////////////////////////////////////////////////////////////////////////////////////////////  

     for(int i = 0; i<100; i++) // loop for checking value in array
     {
             if(input == array[i]) // if it is true then do something like 4=4 then print something on the screen
             {
                      cout << "Value found in " << i;
                     
             }

     }
    getch();
    return 0;
}
