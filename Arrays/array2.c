#include <stdio.h>
/**
 * sum of all elements in array
*/
int main(void)
{
int arr[5];
int noe;/*number of elements*/
int i; /*array place holder*/

/*Please input number of elements; not more than 5*/
printf("Input number of elements to store in array");
scanf("%d" &noe);

/*Input this much elements*/
printf("Input %d elements", noe);
for (i = 0; i <= 4; i++)
{
  if (noe == 1)
  {
    printf("Enter first element:");
    scanf("%d", &i);

  }

  else if (noe == 2)
  {
    printf("Enter first element:");
    scanf("%d\n", &i);
    printf("Enter second element:");
    scanf("%d", &i);
  }

  else if (noe == 3)
  {
    printf("Enter first element:");
    scanf("%d\n", &i);
    printf("Enter second element:");
    scanf("%d", &i);
    printf("Enter third element:");
    scanf("%d\n", &i);
     
  }

  else if (noe == 4)
  {
    printf("Enter first element:");
    scanf("%d\n", &i);
    printf("Enter second element:");
    scanf("%d", &i);
    printf("Enter third element:");
    scanf("%d\n", &i);
    printf("Enter fourth element:");
    scanf("%d", &i);
  }

  else 
  {
    printf("Enter first element:");
    scanf("%d\n", &i);
    printf("Enter second element:");
    scanf("%d", &i);
    printf("Enter third element:");
    scanf("%d\n", &i);
    printf("Enter fourth element:");
    scanf("%d", &i);
    prinf("Enter fifth element:");
    scanf("%d", &i);
  }

  printf("The elements in the array are: %d", arr[i]);
}
return (0);
}