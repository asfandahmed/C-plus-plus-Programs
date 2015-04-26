#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <process.h>
#include <ctime>
#include <iomanip>


using namespace std;

char input[9]= {'1','2','3','4','5','6','7','8','9'}; 
unsigned short player=1;
bool gameFinished=false, win;
void gameName();
unsigned short turn();
char mark_();
void draw();
char getMove();
void setMove(char);
void checkWin();
void checkBoard();
void printwin();
void printBoard();
void choices();
void singlePlayer();
void multiPlayer();
void credits();
unsigned short getRmove();
void setRmove(int);
void resetBoard();
