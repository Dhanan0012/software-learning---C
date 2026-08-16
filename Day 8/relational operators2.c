#include <stdio.h>

int main()
{
   int marks;
   printf("Enter your marks: \n");
   scanf("%d", &marks);
   if(marks >= 50 )
   {
      printf("You have passed the exam.\n"); 
    }
    else
    {
      printf("You have failed the exam.\n");
    }

    return 0;
}