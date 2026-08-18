#include <stdio.h>

int main()
{
    int numbers[5] = {10, 15, 22, 31, 40};
    int count = 0;

    for(int i = 0; i < 5; i++)
    {
        if(numbers[i] % 2 == 0)
        {
            count++;
        }
    }

    printf("Even numbers = %d\n", count);

    return 0;
}