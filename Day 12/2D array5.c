#include <stdio.h>

int main()
{
    int numbers[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for(int col = 0; col < 3; col++)
    {
        int sum = 0;

        for(int row = 0; row < 3; row++)
        {
            sum = sum + numbers[row][col];
        }

        printf("Column %d sum = %d\n", col  + 1, sum);
    }

    return 0;
}