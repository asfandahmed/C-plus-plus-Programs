#include <iostream>
#include <conio.h>
int search(int[], int);
int SIZE = 10;
int main(){
    int array[SIZE];
    for(int i=0; i<=10; i++){
            array[i] = i*2;
    }
    int key_val, temp;
    scanf("%d", &key_val);
    temp = search(array, key_val);
    if(temp == -1)
            printf("%s", "Value not found!");
    else
        printf("%s %d", "Value fount at ", temp);
        
    getch();
    return 0;
}
int search(int a[], int key){
     for(int j=0; j<=SIZE; j++)
             if(a[j] == key)
             return j;
     
     return -1;
}
