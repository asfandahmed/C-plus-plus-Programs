#include "ClientData.cpp"
//#include "ClientData.h"
int main()
{
    ostream outCredit("credit.dat", ios::binary | ios::out);
    if(!outCredit)
    {
                  cerr << "File could not be opened." << endl;
                  exit(1);
    }
    ClientData bankClient;
    for(int i=0; i<100; i++)
            outCredit.write(reinterpret_cast<const char*>(&bankClient), sizeof(ClientData));
    getch();
    return 0;
}
