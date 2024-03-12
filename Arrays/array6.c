#include <stdio.h>
/**
 * say which number is unique
*/
int main(void)
{
  int arr[5], noe;/*noe: number of elements*/

    printf("\nEnter first element here: ");
    scanf("%d", &arr[0]);
    printf("\nEnter second element here: ");
    scanf("%d", &arr[1]);
    printf("\nEnter third element here: ");
    scanf("%d", &arr[2]);
    printf("\nEnter fourth element here: ");
    scanf("%d", &arr[3]);

  
  if (arr[0] == arr[1] && arr[1] == arr[2] 
  && arr[2] == arr[3])
  {
    printf("\nThere are no unique elements");
  }

  else if (arr[0] == arr[1] && arr[3] != arr[0])
  {
    printf("%d is the unique element", arr[3]);
  }

  else if (arr[1] == arr[2] && arr[0] != arr[1])
  {
    printf("%d is the unique element", arr[0]);
  }

  else if (arr[0] == arr[2] && arr[1] != arr[0])
  {
    printf("%d is the unique element", arr[1]);
  }

  else if (arr[0] == arr[2] && arr[0] != arr[3])
  {
    printf("%d is the unique element", arr[2]);
  }

  else if (arr[0] != arr[1] && arr[1] != arr[2] 
  && arr[2] != arr[3])
  {
    printf("They are all unique");
  }
}