#include <stdio.h>
/**
 * count the number of duplicate elements
*/
int main(void)
{
  int arr[5], noe;/*noe: number of elements*/

  /*Enter number of elements to store*/
  printf("Enter the number of elements to store in array: ");
  scanf("%d", &noe);
  printf("\n-------------------------------------------------");
  
  /*Enter this many elements*/
  printf("\n\nEnter %d element(s)", noe);
  printf("\n----------------------------");

  switch (noe)
  {
    case 1:
    printf("\nEnter element here: ");
    scanf("%d", &arr[0]);  
    break;

    case 2:
    printf("\nEnter first element here: ");
    scanf("%d", &arr[0]);
    printf("\nEnter second element here: ");
    scanf("%d", &arr[1]);  
    break;

    case 3:
    printf("\nEnter first element here: ");
    scanf("%d", &arr[0]);
    printf("\nEnter second element here: ");
    scanf("%d", &arr[1]);
    printf("\nEnter third element here: ");
    scanf("%d", &arr[2]);
    break;
  }

  
  if (arr[0] == arr[1] || arr[0] == arr[2] ||
  arr[1] == arr[2] && (arr[0] != arr[1] && arr[0] != arr[2]))
  {
    printf("2 elements are the same");
  }

  else if (arr[0] == arr[1] && arr[0] == arr[2])
  {
    printf("All elements are the same");
  }

  else
  {
    printf("None f the elements are the same");
  }

}