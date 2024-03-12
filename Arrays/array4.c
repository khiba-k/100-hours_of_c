#include <stdio.h>
/**
 * copy elements of one array into another
*/
int main(void)
{
int arr[3];
int noe;/*number of elements*/
int cpArr[3]; /*array to copy elements to*/
int i;

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
    printf("\nEnter first element:");
    scanf("%d", &arr[0]);
    printf("\nThe elements stored in the first array are: %d", arr[0]);
    cpArr[0] = arr[0];
    printf("\nThe element stored in the second array is: %d", cpArr[0]);
    break;

    case 2:
    printf("\nEnter first element:");
    scanf("%d", &arr[0]);
    printf("\nEnter second element:");
    scanf("%d", &arr[1]);
    printf("\nThe elements stored in the first array are: %d, %d", arr[0], arr[1]);
    cpArr[0] = arr[0];
    cpArr[1] = arr[1];
    printf("\nThe elements stored in the second array are: %d, %d", cpArr[0], cpArr[1]);
    break;

    case 3:
    printf("\nEnter first element:");
    scanf("%d", &arr[0]);
    printf("\nEnter second element:");
    scanf("%d", &arr[1]);
    printf("\nEnter third element:");
    scanf("%d", &arr[2]);
    printf("\nThe elements stored in the first array are: %d, %d, %d", arr[0], arr[1], arr[2]); 
    cpArr[0] = arr[0];
    cpArr[1] = arr[1];
    cpArr[2] = arr[2];
    printf("\nThe elements stored in the secod array are: %d, %d, %d", cpArr[0], cpArr[1], cpArr[2]);
    break;
  }

return (0);
}
