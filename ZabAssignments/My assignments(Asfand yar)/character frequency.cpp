#include <iostream>
#include <conio.h>
int main(){
    char str[25];
    int counter=0;
    printf("%s", "Enter a string less than 25 characters:\n");
    int len = strlen(str);
    int i=0;
    while((str[i]=getche()) != '\r'){
            if(i==24){
             printf("%s", "\nLimit reached!");
             break;
            }
            i++;
    }
    len = strlen(str);
    for(i=0; i<len; i++){
             if(str[i]=='e'|| str[i]=='E'){
                             counter++;
             }
    }
    printf("%s %d %s", "\nCharacter e occured", counter, " times.");
    getch();
    return 0;
}
