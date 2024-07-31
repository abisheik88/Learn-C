//This line indicates the standard input and output libraries from c
#include <stdio.h>

//This is the main function
int main()
{
    //declare three variables with data type integer
    int num1, num2, sum;

    printf("Enter the first number: ");
    //Accepts user input
    scanf("%d", &num1);
    printf("Enter the first number: ");
    scanf("%d", &num2);

    sum=num1+num2;
    printf("--------------->%d",sum);
    return 0;
}