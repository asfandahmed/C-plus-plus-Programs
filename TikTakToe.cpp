#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <process.h>
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
int main()
{
 system("TITLE, TIC TAC TOE");
   
 choices();
 getch();
 return 0;   
}
void gameName()
{
     cout << setw(8) << "***************" << endl
          << setw(8) << "* TIK TAK TOE *" << endl
          << setw(8) << "***************" ;
}
//////////////////////////////////////////////////////////
void choices()
{
     unsigned char choice;
     do
     {
     system("CLS");
     cout << "\n1. Single Player" << endl;
     cout << "2. Multi Player" << endl;
     cout << "3. Credits" << endl;
     cout << "4. Exit" << endl;
     cout << "Enter your choice: ";
     choice = getche();
     switch(choice)
     {
                     case '1':
                          singlePlayer();
                          break;
                     case '2':
                          multiPlayer();
                          break;
                     case '3':
                          credits();
                          break;
                     case '4':
                          exit(1);
                          break;
                     default:
                     cout << "\nInvalid Choice!" << endl;
                     system("PAUSE");
     }
     }while(choice != '4');
}
//////////////////////////////////////////////////////////
void singlePlayer()
{

 do
 {
  system("CLS");
  gameName();
  draw();
  if(player==1)
  {setRmove(getRmove());}
  else
  {setMove(getMove());}
  checkWin();
  checkBoard();
  }while(gameFinished!=true);
  printBoard();
  system("PAUSE");
  resetBoard();
}
///////////////////////////////////////////////////////////
unsigned short getRmove()
{
         srand(time(0));
     return 1 + rand() % 9;
}
///////////////////////////////////////////////////////////
void setRmove(int move)
{
     if (move == 1 && input[0] == '1') {
               input[0]=mark_(); turn(); 
			} else if (move == 2 && input[1] == '2') {
                      input[1]=mark_(); turn();
			} else if (move == 3 && input[2] == '3') {
			          input[2]=mark_(); turn();
			} else if (move == 4 && input[3] == '4') {
			          input[3]=mark_(); turn();
			} else if (move == 5 && input[4] == '5') {
				      input[4]=mark_(); turn();
			} else if (move == 6 && input[5] == '6') {
			          input[5]=mark_(); turn();
			} else if (move == 7 && input[6] == '7') {
				      input[6]=mark_(); turn();
			} else if (move == 8 && input[7] == '8') {
				      input[7]=mark_(); turn();
			} else if (move == 9 && input[8] == '9') {
				      input[8]=mark_(); turn();
			}
}
//////////////////////////////////////////////////////////
void multiPlayer()
{
 
 do
 {
  system("CLS");
  gameName();
  draw();
  setMove(getMove());
  checkWin();
  checkBoard();
  }while(gameFinished!=true);
  printBoard();
  system("PAUSE");
  resetBoard();
}
//////////////////////////////////////////////////////////
void credits()
{
     system("CLS");
     cout << "\nAsfand yar Ahmed " << endl;
     cout << "For futher details mail me at asfandahmed1@gmail.com" << endl;
     system("PAUSE");
}
//////////////////////////////////////////////////////////
unsigned short turn()
{
     if(player==1)
     {
     player = 2;
                   }
     else
     {
         player = 1;
     }
     return player;
  
 }
//////////////////////////////////////////////////////////////////
char mark_()
{     
     if(player==1)
     {
         return  'X';
                  }
     else
     {
         return  'O';
     }
 }
/////////////////////////////////////////////////////////////////////////////
void draw()
{
     cout << "\n\n\t"<< input[0] <<"|" << input[1] <<"|" << input[2] <<endl
          << "\t" <<"-+-+-" <<endl
          << "\t"<< input[3] <<"|" << input[4] <<"|" << input[5] <<endl
          << "\t" <<"-+-+-" <<endl
          << "\t"<< input[6] <<"|" << input[7] <<"|" << input[8] << endl << endl;
}
/////////////////////////////////////////////////////////////////////////////
char getMove()
{
      cout << "Player " << player << "'s turn: ";
      return getche();
}
////////////////////////////////////////////////////////////////////////////
void setMove(char move)
{  
			// Check for a valid move
			if (move == '1' && input[0] == '1') {
               input[0]=mark_(); turn();
			} else if (move == '2' && input[1] == '2') {
                      input[1]=mark_(); turn();
			} else if (move == '3' && input[2] == '3') {
			          input[2]=mark_(); turn();
			} else if (move == '4' && input[3] == '4') {
			          input[3]=mark_(); turn();
			} else if (move == '5' && input[4] == '5') {
				      input[4]=mark_(); turn();
			} else if (move == '6' && input[5] == '6') {
			          input[5]=mark_(); turn();
			} else if (move == '7' && input[6] == '7') {
				      input[6]=mark_(); turn();
			} else if (move == '8' && input[7] == '8') {
				      input[7]=mark_(); turn();
			} else if (move == '9' && input[8] == '9') {
				      input[8]=mark_(); turn();
			} else {
				cout << "\a ";
			}
 }
////////////////////////////////////////////////////////////////////////////
void checkWin()
{
     if(input[0]!= '1' || input[2]!= '3' || input[4] != '5' || input[6]!='7')
     {
                   if(input[1]==input[0] && input[2]==input[1])
                   {
                                         gameFinished = true; win = true;
                                          }
                   if(input[3]==input[0] && input[6]==input[3])
                   {
                                         gameFinished = true; win = true;
                                         }
                   if(input[4]==input[1] && input[1]==input[8])
                   {
                                         gameFinished = true; win = true;
                                         }
     }
     if(input[4]!='5')
     {
                      if(input[1]==input[4] && input[4]==input[7])
                      {
                                            gameFinished = true; win = true;
                                            }
                     if(input[3]==input[4] && input[4]==input[5])
                     {
                                           gameFinished = true; win = true;
                                         }            
     }
     if(input[8]!='9' || input[6]!='9' || input[2] != '5')
     {
                      if(input[5]==input[8] && input[8]==input[2])
                      {
                                            gameFinished = true; win = true;
                                          }
                      if(input[7]==input[8] && input[8]==input[6])
                      {
                                            gameFinished = true; win = true;
                                            }
                      if(input[4]==input[9] && input[9]==input[0])
                      {
                                          gameFinished = true; win = true;
                                          }
     }
 }
////////////////////////////////////////////////////////////////////////////
void checkBoard()
{
     if(input[0]!='1' && input[1] != '2' && input[2] != '3'
     && input[3] != '4' && input[4] != '5' && input[5] != '6'
     && input[6] != '7' && input[7] != '8' && input[8] != '9' && gameFinished != true)
     {
         gameFinished = true; win = false;
     }
 }
////////////////////////////////////////////////////////////////////////////
void printWin()
{
     turn();
     cout << "Player " << player << " wins." << endl;
}
////////////////////////////////////////////////////////////////////////////
void printBoard()
{
     if(win==true)
     {
                  system("CLS");
                  gameName();
                  draw();
                  printWin();
                  }
     else
     {
          system("CLS");
          gameName();
          draw();
          cout << "Draw";
     }
 }
////////////////////////////////////////////////////////////////////
void resetBoard()
{
     input[0]  = '1';
     input[1]  = '2';
     input[2]  = '3';
     input[3]  = '4';
     input[4]  = '5';
     input[5]  = '6';
     input[6]  = '7';
     input[7]  = '8';
     input[8]  = '9';
     gameFinished = false; win = false;
     player = 1;
}
