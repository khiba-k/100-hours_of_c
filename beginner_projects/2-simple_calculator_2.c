#include <stdio.h>

/**
 * simple calculator using if else
 * main - function name
 * Return: end of function 
*/

int main(void)
{
    int one, two;
    char operator1;
    
    printf("Enter operator(+ \\ - \\ * \\ \\):");
    scanf("%c", &operator1);
    printf("Enter first number:");
    scanf("%d", &one);
    printf("Enter second number:");
    scanf("%d", &two);

    
    if (operator1 == '+')
    {
      printf("%d + %d = %d", one, two, one + two);
    }

    else if (operator1 == '-')
    {
      printf("%d - %d = %d", one, two, one - two);
    }

    if (operator1 == '*')
    {
      printf("%d * %d = %d", one, two, one * two);
    }

    if (operator1 == '/')
    {
      printf("%d / %d = %d", one, two, one / two);
    }

    return(0);
}
