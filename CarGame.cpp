#include <cstdlib>
#include <iostream>
#include <string>
#include <conio.h>
#include <process.h>

using namespace std;

//car variables
string car("|=|");
string car_frontback("0-0");
string car_space_left("");
string car_space_right("");
int car_space_int = 10;
//int car_health = 100;

//enemy variables
string enemy("|=|");
string enemy_frontback("X=X");
string enemy_space_left("");
string enemy_space_right("");
int enemy_space_int = 0;
int enemy_pos = 0;

//game variables
int row_total = 15;
int space_total = 20;
string game_space(" ");
string line("|");
string show_nothing(" ");
int nothing[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
int i = 0;
int num = 0;

//keyboard variables
const char KEYRIGHT = 75;
const char KEYLEFT = 77;
char arrow = 0;

int main(int argc, char *argv[])
{
//title screen
cout << " -----------------" << endl
<< " - Welcome -" << endl
<< " - to -" << endl
<< " - Ultra Car -" << endl
<< " - Racing -" << endl
<< " - 3000 -" << endl
<< " -----------------" << endl
<< "" << endl
<< "Use the left and right keys to dodge cars." << endl
<< "Press any key to start.";

srand(time(NULL));

//check keyboard
arrow = kbhit();
while(arrow !=27) {

//variables
i = 0;
car_space_left = "";
car_space_right = "";
enemy_space_left = "";
enemy_space_right = "";

//wait for kb input... why wait?! :( ..stupid <strong class="highlight">c++</strong>
arrow = getch();
switch(arrow)
{
case KEYLEFT:
//left arrow key
if (car_space_int <= space_total) car_space_int+=1;
break;
case KEYRIGHT:
//right arrow key
if (car_space_int > 0) car_space_int-=1;
break;
}

//space left to the car
for (i=0; i < car_space_int; i++) {
car_space_left = car_space_left + " ";
}

//space right to the car
for (i=0; i <= space_total-car_space_int; i++) {
car_space_right = car_space_right + " ";
}

//set enemy position
if (enemy_pos == 14) {
num = 1 + rand() % (20 - 1 + 1);
enemy_space_int = num;
}

//space left to the enemy
for (i=0; i < enemy_space_int; i++) {
enemy_space_left = enemy_space_left + " ";
}

//space right to the enemy
for (i=0; i <= space_total-enemy_space_int; i++) {
enemy_space_right = enemy_space_right + " ";
}



enemy_pos += 1;
if (enemy_pos > row_total) {
enemy_pos = 0;
}



//clear screen
system("cls");

//place game screen lower

cout << endl;
cout << endl;
cout << endl;

//position of enemy
for (i=0; i<row_total; i++)
{

nothing[i] = 0;

}



nothing[enemy_pos] = 1;
nothing[enemy_pos+1] = 2;
nothing[enemy_pos+2] = 1;

//show road, enemy
for (i=0; i<row_total; i++) {
if (nothing[i] == 0) { show_nothing = " "; }
else if (nothing[i] == 1) { show_nothing = enemy_frontback; }
else if (nothing[i] == 2) { show_nothing = enemy; }
cout << game_space << line << enemy_space_left << show_nothing << enemy_space_right << line << endl;
}

//show car
cout << game_space << line << car_space_left << car_frontback << car_space_right << line << endl;
cout << game_space << line << car_space_left << car << car_space_right << line << endl;
cout << game_space << line << car_space_left << car_frontback << car_space_right << line << endl;

cout << endl << "check " << enemy_pos << " + " << i;


}

//end game
system("PAUSE");
return EXIT_SUCCESS;
}
