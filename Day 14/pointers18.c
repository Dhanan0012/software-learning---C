#include <stdio.h>

int positiveSum(int *ptr, int size)
{
    int sum = 0;

    for(int i = 0; i < size; i++)
    {
        if(*(ptr + i) > 0)
        {
            sum = sum + *(ptr + i);
        }
    }

    return sum;
}

int main()
{
    int numbers[6] = {10, -5, 20, -8, 0, 15};

    int result = positiveSum(numbers, 6);

    printf("Sum of positive numbers = %d\n", result);

    return 0;
}