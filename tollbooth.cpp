#include <iostream>
#include <conio.h>
#include <fstream>
#include <process.h>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

class tollbooth
{
      private:
      float cash;        
      int cars;
      char *date;
      public:
             tollbooth(): cars(0), cash(0.0)
             {            }
             void payingcar()
             {
                  cars++;
                  cash += 0.50;
              }
              void nonpayingcar()
              {
                   cars++;
               }
               void display() const
               {
                    cout << "Total cars: "<< cars << endl;
                    cout << "Total cash: $" << cash << endl;
                }
                char getdate()
                {
	            
	            time_t timer;
	            timer=time(NULL);
	            date = asctime(localtime(&timer));
	            cout << right << date << right <<endl;
                }
                void saveData(tollbooth t1)
               {
                     fstream os("tollbooth.dat", ios::binary | ios::out | ios::in);
                     if(t1.cars!=0 && t1.cash!=0.0)
                     {
                     os.write(reinterpret_cast<char*>(&t1), sizeof(tollbooth));
                     }
                     ofstream outfile("tollbooth.txt",ios::out);
                     if(!outfile)
                     {cerr<< "Could not create file." << endl; exit(1);}
                     outfile << "\tThanks for using\n\nFor more applications and info email at asfandahmed1@gmail.com\n\n";
                     outfile << "\tCARS \t CASH" << endl;
                     os.seekg(0);
                     os.read(reinterpret_cast<char*>(&t1), sizeof(tollbooth));
                     while(!os.eof())
                      {
                      os.read(reinterpret_cast<char*>(&t1), sizeof(tollbooth));
                      outfile << setw(11) << t1.cars << setw(9) << t1.cash << endl;
                      }
                     cout << "Your data is now saved!" << endl;
                }
                void displaymsg() const
                {
                        cout << "\t\tWelcome to TollBooth program\tVer: 1.02\n*For more applications and info Email at asfandahmed1@gmail.com*"<< endl << endl;
                        cout << "\t* Press 1 for paying car" << endl;
                        cout << "\t* Press 2 for nonpaying car" << endl;
                        cout << "\t* Press 3 for display" << endl;
                        cout << "\t* Press 4 for save" << endl;
                        cout << "\t* Press 5 for exit" << endl;
                 }
                 
                 void readData(tollbooth& tb1)
                 {
                      ifstream infile;
                      infile.open("tollbooth.dat", ios::in | ios::binary);
                      if(!infile)
                      {cerr<< "Could not create file." << endl; }
                      else{
                      infile.seekg(0);
                      infile.read(reinterpret_cast<char*>(&tb1), sizeof(tollbooth));
                      while(!infile.eof())
                      {
                      infile.read(reinterpret_cast<char*>(&tb1), sizeof(tollbooth));
                      }
                      }
                 }
                
      };
int main()
{
    ofstream outfile("tollbooth.dat", ios::app);
    tollbooth tb1;
    tb1.getdate();
    tb1.readData(tb1);
    tb1.displaymsg();
    char pos;
    while(pos!='5')
    {
                    cout << "Select operation: ";
                    cin>>pos;
                    cin.ignore(10, '\n');
                    switch(pos)
                    {
                               case '1':
                                    tb1.payingcar();
                                    break;
                               case '2':
                                    tb1.nonpayingcar();
                                    break;
                               case '3':
                                    tb1.display(); 
                                    break;
                               case '4':
                                    tb1.saveData(tb1); 
                                    break;
                               case '5':
                                    exit(1);;
                                    break;
                               default:
                                       cout << "Invalid number selection!\a" << endl;
                                       break;
                    }
    }
    getch();
    return 0;         
}
