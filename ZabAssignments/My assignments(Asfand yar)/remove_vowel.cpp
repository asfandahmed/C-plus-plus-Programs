#include <iostream>
#include <conio.h>
int main(){
    char str[20];
    gets(str);
    int len = strlen(str);
    char temp[20];
    int temp_counter=0;
    for(int i=0; i<len; i++){
            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            {
                      continue;
            }
            else{
                 temp[temp_counter] = str[i];
                 temp_counter++;
            }
    }
    temp[temp_counter] = '\0';
    strcpy(str, temp);  
    puts(str);
    getch();
    return 0;
}
