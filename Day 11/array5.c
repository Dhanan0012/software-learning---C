#include <stdio.h>

int main()
{
    int numbers[5] = {25, 80, 15, 90, 40};
    int largest = numbers[0];

    for(int i = 1; i < 5; i++)
    {
        if(numbers[i] > largest)
        {
            largest = numbers[i];
        }
    }

    printf("Largest = %d\n", largest);

    return 0;
}