#include<iostream>
#include<conio.h>
using namespace std;
enum Suit{clubs, diamonds, hearts, spades};
const int jack = 11;       //from 2 to 10 are
const int queen = 12;      //integers without name
const int king = 13;
const int ace = 14;
///////////////////////////////////////////////
class card
{
      private:
              int number;
              Suit suit;
      public:
             card()     //constructor (no args)
             {          }
             card(int n, Suit s): number(n), suit(s)
             {        }
             void display();  //display card
             bool isEqual(card); //same as another card?
      };
////////////////////////////////////////////////////////
void card::display()        //display the card
{
     if(number >=2 && number <= 10)
     cout << number <<" of ";
     else
     switch(number)
     {
     case jack:
     cout << "jack of "; break;
     case queen:
     cout << "Queen of "; break;
     case king:
     cout << "King of "; break;
     case ace:
     cout << "Ace of "; break;
                   }
     switch(suit)
     {
     case clubs:
     cout << "Clubs"; break;
     case diamonds:
     cout << "Diamonds"; break;
     case hearts:
     cout << "Hearts"; break;
     case spades:
     cout << "Spades"; break;
                 }
 }
 //////////////////////////////////////////////////////
 bool card::isEqual(card c2)
 {
      return (number==c2.number && suit==c2.suit)? true : false;
  }
/////////////////////////////////////////////////////////////////
int main()
{
    card temp, chosen, prize;     //define various cards
    int position;
    card card1(7, clubs);         //define and initialize card1
    cout << "\nCard 1 is the ";
    card1.display();              //display card 1
    
    card card2(jack, hearts);     //define and initialize card2
    cout << "\nCard 2 is the ";
    card2.display();              //display card2
    
    card card3(ace, spades);      //define and initialize card3
    cout << "\nCard 3 is the ";
    card3.display();              //display card3  
    prize = card3;                //prize is card to guess
    
    cout << "\nI am swapping card 1 and 3";
    temp = card3; card3 = card1; card1 = temp;
    
    cout << "\nI am swapping card 2 and 3";
    temp = card3; card3 = card2; card2 = temp;
    
    cout << "\nI am swapping card 1 and 2";
    temp = card2; card2 = card1; card1 = temp;
    
    cout << "\nNow, where(1, 2 or 3) is the ";
    prize.display();         //display prize card
    cout << " ? ";
    cin >> position;         //get user's guess of position
    
    switch(position)
    {
    case 1: chosen = card1; break;
    case 2: chosen = card2; break;
    case 3: chosen = card3; break;
                    }
    if(chosen.isEqual(prize))     //is chosen card prize
    cout << "That's right! You win! ";
    else
    cout << "Sorry. You lose";
    cout << "you chose the ";
    chosen.display();  //display the chosen card
    cout << endl;
    getch();
    return 0;
}
