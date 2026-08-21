#include <stdio.h>

int countLess(int *ptr, int size, int value)
{
    int count = 0;

    for(int i = 0; i < size; i++)
    {
        if(*(ptr + i) < value)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int numbers[6] = {10, 25, 40, 15, 60, 30};

    int result = countLess(numbers, 6, 30);

    printf("Numbers less than 30 = %d\n", result);

    return 0;
}