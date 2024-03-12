#include <stdio.h>
/**
 * sum of all elements in array
*/
int main(void)
{
int arr[5];
int noe;/*number of elements*/

/*Please input number of elements; not more than 5*/
printf("Input number of elements to store in array: ");
scanf("%d", &noe);
printf("----------------------------------------------");

/*Input this much elements*/
printf("\n\nInput %d element(s)\n", noe);
printf("\n--------------------------------");

  switch (noe)
  {
    case 1:   
    printf("Enter first element:");
    scanf("%d", &arr[0]);
    printf("\nYou only inserted one element which is : %d", arr[0]);
    break;

    case 2:
    printf("\nEnter first element:");
    scanf("%d", &arr[0]);
    printf("\nEnter second element:");
    scanf("%d", &arr[1]);
    printf("\nThe sum of your elements is: %d\n", arr[0] + arr[1]);
    break;

    case 3:
    printf("\nEnter first element:");
    scanf("%d", &arr[0]);
    printf("\nEnter second element:");
    scanf("%d", &arr[1]);
    printf("\nEnter third element:");
    scanf("%d", &arr[2]);
    printf("\nThe sum of your elements is: %d\n", arr[0] + arr[1] + arr[2]); 
    break;

    case 4:
    printf("\nEnter first element:");
    scanf("%d", &arr[0]);
    printf("\nEnter second element:");
    scanf("%d", &arr[1]);
    printf("\nEnter third element:");
    scanf("%d", &arr[2]);
    printf("\nEnter fourth element:");
    scanf("%d", &arr[3]);
    printf("\nThe sum of your elements is: %d\n", arr[0] + arr[1] + arr[2] + arr[3]);
    break;

    case 5:
    printf("\nEnter first element:");
    scanf("%d", &arr[0]);
    printf("\nEnter second element:");
    scanf("%d", &arr[1]);
    printf("\nEnter third element:");
    scanf("%d", &arr[2]);
    printf("\nEnter fourth element:");
    scanf("%d", &arr[3]);
    printf("\nEnter fifth element:");
    scanf("%d", &arr[4]);
    printf("\nThe sum of your elements is: %d\n", arr[0] + arr[1] + arr[2] + arr[3] + arr[4]);
    break;

  }


return (0);
}
