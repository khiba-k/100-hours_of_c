#include <stdio.h>
/**
 * simple calculator program
 * main - function name
 * Return: end of function 
 */

int main(void)
{
    int one, two;
    char operator;
    
    printf("Enter operand:");
    scanf("%c", &operator);

    printf("Enter first number:");
    scanf("%d", &one);
    
    printf("Enter first second number:");
    scanf("%d", &two);

    switch(operator)
    {
        case '+':
        printf("%d + %d = %d\n", one, two, one + two);
        break;

        case '-':
        printf("%d - %d = %d\n", one, two, one - two);
        break;

        case '*':
        printf("%d * %d = %d\n", one, two, one * two);
        break;

        case '/':
        printf("%d / %d = %d\n", one, two, one / two);
        break;
    }

    return (0);
}
