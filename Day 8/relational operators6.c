#include <stdio.h>
int main()
{
   int number ;
   printf("Enter the positive or negative value: ");
   scanf("%d", &number);
   number > 0 ?
 printf("number is positive\n") :
  printf("number is negative\n");
}