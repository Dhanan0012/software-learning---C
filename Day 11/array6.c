#include <stdio.h>

int main()
{
    int numbers[5] = {10, 25, 40, 55, 70};
    int search = 40;

    for(int i = 0; i < 5; i++)
    {
        if(numbers[i] == search)
        {
            printf("Number found\n");
        }
    }

    return 0;
}