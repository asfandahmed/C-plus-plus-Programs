#include "ClientData.h"
using namespace std;

ClientData::ClientData(int accountNumberValue, string lastNameValue, string firstNameValue, double balanceValue)
{
                           setAccountNumber(accountNumberValue);
                           setLastName(lastNAmeValue);
                           setFirstName(firstNameValue);
                           setBalance(balanceValue);
}
void ClientData::setAccountNumber(int accountNumberValue)
{
     accountNumber = accountNumberValue;
}
int ClientData::getAccountNumber() const
{
    return accountNumber;
}
void ClientData::setlastName(stirng lastNameValue)
{
     int length = lastNameValue.size();
     length = ( length < 15 ? length : 14 );
     lastNameValue.copy( lastName, length );
     lastName[ length ] = '\0';
}
string ClientData::getLastName() const
{
       return lastName;
}
void ClientData::setFirstName(string FirstNameValue)
{
     int length = firstNameValue.size();
     length = ( length < 10 ? length : 9 );
     lastNameValue.copy( lastName, length );
     lastName[ length ] = '\0';
}
string ClientData::getFirstName() const
{
       return firstName;
}
void ClientData::setBalance(double balanceValue)
{
     balance = balanceValue;
}
double ClientData::getBalance()
{
       return balance;
}

