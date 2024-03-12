#include <stdio.h>

int main(void)
{
int arr[8] = {1, 2 , 3, 4, 5, 6, 7, 8};
int i;
for (i = 7; i >= 0; i--)
{
printf("%d", arr[i]);
}
return (0);
}