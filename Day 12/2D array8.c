#include <stdio.h>

int main()
{
    int A[2][2] = {
        {1, 2},
        {3, 4}
    };

    int B[2][2] = {
        {5, 6},
        {7, 8}
    };

    int C[2][2];

    for(int row = 0; row < 2; row++)
    {
        for(int col = 0; col < 2; col++)
        {
            C[row][col] = 0;

            for(int k = 0; k < 2; k++)
            {
                C[row][col] = C[row][col] + A[row][k] * B[k][col];
            }
        }
    }

    printf("Result:\n");

    for(int row = 0; row < 2; row++)
    {
        for(int col = 0; col < 2; col++)
        {
            printf("%d ", C[row][col]);
        }

        printf("\n");
    }

    return 0;
}