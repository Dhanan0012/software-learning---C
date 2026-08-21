#include <stdio.h>

int countEven(int *ptr, int size)
{
    int count = 0;

    for(int i = 0; i < size; i++)
    {
        if(*(ptr + i) % 2 == 0)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int numbers[6] = {10, 15, 22, 31, 40, 55};

    int result = countEven(numbers, 6);

    printf("Even numbers = %d\n", result);

    return 0;
}