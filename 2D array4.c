#include <stdio.h>

int main()
{
    int numbers[3][3];
    int sum = 0;

    // Take input
    for(int row = 0; row < 3; row++)
    {
        for(int col = 0; col < 3; col++)
        {
            printf("Enter number: ");
            scanf("%d", &numbers[row][col]);
        }
    }

    // Calculate sum
    for(int row = 0; row < 3; row++)
    {
        for(int col = 0; col < 3; col++)
        {
            sum = sum + numbers[row][col];
        }
    }

    printf("Sum = %d\n", sum);

    return 0;
}