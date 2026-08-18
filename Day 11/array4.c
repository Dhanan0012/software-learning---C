#include <stdio.h>

int main()
{
    int numbers[5];
    int sum = 0;
    float average;

    for(int i = 0; i < 5; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    average = (float)sum / 5;



    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}