#include <stdio.h>

void countNumbers(int *ptr, int size, int *positive, int *negative)
{
    *positive = 0;
    *negative = 0;

    for(int i = 0; i < size; i++)
    {
        if(*(ptr + i) > 0)
        {
            (*positive)++;
        }
        else if(*(ptr + i) < 0)
        {
            (*negative)++;
        }
    }
}

int main()
{
    int numbers[6] = {10, -5, 20, -8, 0, 15};

    int positive;
    int negative;

    countNumbers(numbers, 6, &positive, &negative);

    printf("Positive numbers = %d\n", positive);
    printf("Negative numbers = %d\n", negative);

    return 0;
}