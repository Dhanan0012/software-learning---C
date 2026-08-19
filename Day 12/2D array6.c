#include <stdio.h>

int main()
{
    int numbers[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for(int row = 0; row < 3; row++)
    {
        for(int col = 0; col < 3; col++)
        {
            if(row == col)
            {
                printf("%d ", numbers[row][col]);
            }
        }
    }

    return 0;
}