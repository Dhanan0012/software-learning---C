#include <stdio.h>

int contains(int *ptr, int size, int value)
{
    for(int i = 0; i < size; i++)
    {
        if(*(ptr + i) == value)
        {
            return 1;
        }
    }

    return 0;
}

int main()
{
    int numbers[6] = {10, 25, 40, 25, 60, 30};

    int result = contains(numbers, 6, 40);

    if(result == 1)
    {
        printf("Element found\n");
    }
    else
    {
        printf("Element not found\n");
    }

    return 0;
}