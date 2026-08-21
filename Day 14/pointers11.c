#include <stdio.h>

int findSmallest(int *ptr, int size)
{
    int smallest = *ptr;

    for(int i = 1; i < size; i++)
    {
        if(*(ptr + i) < smallest)
        {
            smallest = *(ptr + i);
        }
    }

    return smallest;
}

int main()
{
    int numbers[5] = {25, 80, 15, 90, 40};

    int result = findSmallest(numbers, 5);

    printf("Smallest = %d\n", result);

    return 0;
}