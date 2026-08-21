#include <stdio.h>

int findLargest(int *ptr, int size)
{
    int largest = *ptr;

    for(int i = 1; i < size; i++)
    {
        if(*(ptr + i) > largest)
        {
            largest = *(ptr + i);
        }
    }

    return largest;
}

int main()
{
    int numbers[5] = {25, 80, 15, 90, 40};

    int result = findLargest(numbers, 5);

    printf("Largest = %d\n", result);

    return 0;
}