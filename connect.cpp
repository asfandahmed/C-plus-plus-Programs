#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <string.h>
#include <mysql.h>
#include <iomanip>
#include <process.h>
void fetch_row(MYSQL_RES*);
bool query(MYSQL*, const char*);
const char* insert();
const char* update();
const char* delete_person();
static char *opt_host_name = "localhost"; /* server host (default=localhost) */
static char *opt_user_name = "root"; /* username (default=login name) */
static char *opt_password = "PHP_4data"; /* password (default=none) */
static unsigned int opt_port_num = 3306; /* port number (use built-in value) */ //3306
static char *opt_socket_name = "/tmp/mysql.sock"; /* socket name (use built-in value) */
static char *opt_db_name = "phone_book"; /* database name (default=none) */
static unsigned long opt_flags = 0;
using namespace std;
int main()
{
    MYSQL *conn;
    MYSQL_RES *result;
    conn = mysql_init(NULL);
    mysql_real_connect (conn, opt_host_name, opt_user_name, opt_password,
    opt_db_name, opt_port_num, opt_socket_name, opt_flags); 
    while(1)
    {
            char ch;
            system("CLS");
            cout << "Press 1 for displaying information." << endl;
            cout << "Press 2 for inseting a record." << endl;
            cout << "Press 3 for upadating information." << endl;
            cout << "Press 4 for deleting a record." << endl;
            cout << "Press 5 for exit." << endl;
            cout << "Enter your choice: "; 
            ch = getche();
            switch(ch)
            {
                      case '1':
                           query(conn, "SELECT * FROM person"); 
                           result = mysql_use_result(conn);
                           fetch_row(result);
                           system("pause");
                           break;
                      case '2':
                           if(query(conn, insert()) == true)
                           {
                                          cout << "\nRecord added successfully." << endl;
                                          system("pause");
                           }
                           else{
                                cout << "\n Database query failed." << endl;
                                system("pause");
                           }
                           break;
                      case '3':
                           if(query(conn, update()) == true)
                           {
                                          cout << "\nRecord updated successfully." << endl;
                                          system("pause");
                           }
                           else{
                                cout << "\n Database query failed." << endl;
                                system("pause");
                           }
                           break;
                      case '4':
                           if(query(conn, delete_person()) == true)
                           {
                                          cout << "\nRecord deleted successfully." << endl;
                                          system("pause");
                           }
                           else{
                                cout << "\n Database query failed. There is no such id." << endl;
                                system("pause");
                           }
                           break;
                      case '5':
                           exit(1);
                           break;
                      default:
                              cout << "\nYou have entered an invalid choice. YOU S.O.B! :P" << endl;
                              system("pause");
                              break;
            }      
    } 
    
    getch();
    return 0;
}
void fetch_row(MYSQL_RES *result)
{
     MYSQL_ROW rows;
     while(rows = mysql_fetch_row(result))
    {
     cout << "\nID"<< setw(14) << "First Name"<< setw(14) << "Last Name"<< setw(14) 
     << "Email"<< setw(14)  << "Phone#"<< setw(14) << "Address" << endl;
     cout << rows[0]<< setw(11) << rows[1]<< setw(15) << rows[2]<< setw(20)
     << rows[3] << setw(13) << rows[4] << setw(10) << rows[5] << endl;
     }   
}
bool query(MYSQL* con, const char* s)
{
     if(!mysql_query(con, s))
     {
             return true;            
     }
     else{return false;}
}
const char* insert()
{
string fname;
string lname;
string email;
string phone;
string add;
     cout << "\n Enter First name: ";
     cin>>fname;
     cin.ignore(15, '\n');
     cout << "\n Enter last name: ";
     cin>>lname;
     cin.ignore(20, '\n');
     cout << "\n Enter email: ";
     cin>>email;
     cin.ignore(30, '\n');
     cout << "\n Enter phone number: ";
     cin>>phone;
     cin.ignore(15, '\n');
     cout << "\n Enter address :";
     cin>>add;
     cin.ignore(150, '\n');

string sql = "INSERT INTO person(first_name, last_name, email, phone_number, address) VALUES('" + fname +  "', '" + lname + "', '" + email + "', " + phone + ", '" + add + "')";
const char* s;
s = sql.c_str();
return s;
}
const char* delete_person()
{
     string id;
     cout << "\nEnter the person's id: ";
     cin>>id;
     cin.ignore(11, '\n');
     string sql = "DELETE FROM person WHERE id=" + id;
     const char* s = sql.c_str();
     return s;
 }
const char* update()
{
     string id;
     string fname;
     string lname;
     string email;
     string phone;
     string add;
     cout << "\n Enter ID number of person: ";
     cin>>id;
     cin.ignore(11, '\n');
     cout << "\n Enter First name: ";
     cin>>fname;
     cin.ignore(15, '\n');
     cout << "\n Enter last name: ";
     cin>>lname;
     cin.ignore(20, '\n');
     cout << "\n Enter email: ";
     cin>>email;
     cin.ignore(30, '\n');
      cout << "\n Enter phone number: ";
     cin>>phone;
     cin.ignore(15, '\n');
      cout << "\n Enter address :";
     cin>>add;
     cin.ignore(150, '\n');
     string sql = "UPDATE person SET first_name='" + fname + "', last_name='" + lname + "', email='" + email + "', phone_number=" + phone + ", address='" + add + "' WHERE id=" + id;
     const char* s = sql.c_str();
     return s;
}
     
