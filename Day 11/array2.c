#include <stdio.h>

int main()
{
    int numbers[5];

    for(int i = 0; i < 5; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("The numbers are:\n");

    for(int i = 0; i < 5; i++)
    {
        printf("%d\n", numbers[i]);
    }

    return 0;
}