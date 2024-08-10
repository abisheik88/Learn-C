#include <stdio.h>

int main()
{
    int a;
    printf("Enter your favorite number:");
    scanf("%d", &a);
    printf("The favorite number is %d\n", a);
    return 0;
}

/* Here we see like in the scanf function we used '&' because for integer it requires the address to be needed so thats why it is needed*/