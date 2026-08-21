#include <stdio.h>

int findFirst(int *ptr, int size, int value)
{
    for(int i = 0; i < size; i++)
    {
        if(*(ptr + i) == value)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int numbers[6] = {10, 25, 40, 25, 60, 30};

    int result = findFirst(numbers, 6, 25);

    printf("First occurrence = index %d\n", result);

    return 0;
}