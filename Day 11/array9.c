#include <stdio.h>

int main()
{
    int numbers[5] = {10, 20, 30, 40, 50};
    int copy[5];

    for(int i = 0; i < 5; i++)
    {
        copy[i] = numbers[i];
    }

    printf("Copied array:\n");

    for(int i = 0; i < 5; i++)
    {
        printf("%d ", copy[i]);
    }

    return 0;
}