#include <stdio.h>

int main()
{
    int A[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int B[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    int C[3][3];

    for(int row = 0; row < 3; row++)
    {
        for(int col = 0; col < 3; col++)
        {
            C[row][col] = A[row][col] + B[row][col];
        }
    }

    printf("Result:\n");

    for(int row = 0; row < 3; row++)
    {
        for(int col = 0; col < 3; col++)
        {
            printf("%d ", C[row][col]);
        }

        printf("\n");
    }

    return 0;
}