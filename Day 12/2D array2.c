#include <stdio.h>

int main()
{
    int numbers[3][3];

    for(int row = 0; row < 3; row++)
    {
        for(int col = 0; col < 3; col++)
        {
            printf("Enter number: ");
            scanf("%d", &numbers[row][col]);
        }
    }

    printf("\nThe matrix is:\n");

    for(int row = 0; row < 3; row++)
    {
        for(int col = 0; col < 3; col++)
        {
            printf("%d ", numbers[row][col]);
        }

        printf("\n");
    }

    printf("Sum of all elements: %d\n", sum);
    return 0;
}