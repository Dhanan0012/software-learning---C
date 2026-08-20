#include <stdio.h>

int main()
{
    int numbers[3] = {10, 20, 30};

    int *ptr = numbers;

    printf("First element = %d\n", *ptr);
    ptr++;
    printf("Second element = %d\n", *ptr);
    ptr++;
    printf("Third element = %d\n", *ptr);

    return 0;
}