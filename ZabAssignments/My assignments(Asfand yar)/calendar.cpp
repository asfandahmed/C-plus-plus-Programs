#include <iostream>
#include <conio.h>
int main(){
    printf("%s","Mon Tue Wed Thu Fri Sat Sun \n");
    for(int i=1; i<=30; i++){
            printf("%d %s", i, "  ");
            if(i%7==0){
                      printf("%s", "\n"); 
            }
    }
    getch();
    return 0;
}
