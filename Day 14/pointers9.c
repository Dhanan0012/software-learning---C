#include <stdio.h>

float arrayAverage(int *ptr, int size)
{
    int sum = 0;

    for(int i = 0; i < size; i++)
    {
        sum = sum + *(ptr + i);
    }

    return (float)sum / size;
}

int main()
{
    int numbers[4] = {15, 25, 35, 45};

    float result = arrayAverage(numbers, 4);

    printf("Average = %.2f\n", result);

    return 0;
}