#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std;

void stringrev(char myname[]);

int main(){
const int size = 100;
char name[size];

cout << "Enter a 5 character name to reverse!" << endl;


cin.get(name,100,'\n');


stringrev(name);
getch();
return 0;
}

void stringrev(char myname[])
{

int i, n;
int tmp = 0;

for (n=0; myname[n]!=0; n++);

for(i = 0; i < n/2; i++){
tmp = myname[i];
myname[i] = myname[n-1-i];
myname[n-1-i] = tmp;
}
for(i=0; i<strlen(myname); i++)
{
         cout << myname[i];
         }
}
