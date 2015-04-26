#include <iostream>
#include <conio.h>
int SIZE = 5;
int main(){
    int array1[SIZE], array2[SIZE], array3[10], counter;
    printf("%s", "Enter 5 values for array one:\n");
    for(int i=0; i<5; i++){
            scanf("%d", &array1[i]);
    }
    printf("%s", "Enter 5 values for array two:\n");
    for(int j=0; j<5; j++){
            scanf("%d", &array2[j]);
    }

    for(int k=0; k<SIZE; k++){
            array3[k] = array1[k];
    }
    counter=0;
    for(int l=5; l<10; l++){
            array3[l] = array2[counter];
            counter++;
    }
    for(int m=0; m<SIZE*2; m++){
            printf("%d %", array3[m]);
    }

    getch();
    return 0;
}
