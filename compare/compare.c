#include <stdio.h>

int main()
{
    int x;
    int y;

    printf("What is X?");
    scanf("%d", &x);
    printf("What is Y?");
    scanf("%d", &y);

    if (x < y)
        printf("X is less than y");
    else if (x > y)
        printf("Y is less than X");
    else
        printf("X Equal to Y");
}