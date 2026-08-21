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
    int numbers[5] = {10, 20, 30, 40, 50};

    float result = arrayAverage(numbers, 5);

    printf("Average = %.2f\n", result);

    return 0;
}