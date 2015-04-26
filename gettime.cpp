#include <iostream>
#include <stdio.h>
#include <time.h>
#include <conio.h>
int main ()
{
	char *date;
	
	time_t timer;

	timer=time(NULL);
	
	date = asctime(localtime(&timer));

	cout << "Current Date: " << date;
	
	getchar();
	return 0;
}
