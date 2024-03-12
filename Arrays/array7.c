#include <stdio.h>

/**
 * Sort elements as either odd or even
*/
int main(void)
{
/*Variable to store elements in*/
int lmnt[5], i;
printf("Enter 5 elements");
printf("\n------------------");
printf("\n\nEnter first element:");
scanf("%d", &lmnt[0]);

printf("\n\nEnter second element:");
scanf("%d", &lmnt[1]);

printf("\n\nEnter third element:");
scanf("%d", &lmnt[2]);

printf("\n\nEnter fourth element:");
scanf("%d", &lmnt[3]);

printf("\n\nEnter fifth element:");
scanf("%d", &lmnt[4]);

for (i = 0; lmnt[i] != '\0'; i++)
{
{
if (lmnt[i] % 2 == 0)
{
printf("\n\n\n%d is even\n", lmnt[i]);
}
else if (lmnt[i] % 2 != 0)
{
printf("\n\n\n%d is odd\n", lmnt[i]);
}
}
}
}