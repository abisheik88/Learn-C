#include <stdio.h>

int main(void){
    char name[50];
    printf("Enter your name:");
    scanf("%51s",name);
    printf("hello,%s\n",name);
    return 0;
}