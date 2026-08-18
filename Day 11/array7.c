#include <stdio.h>

int main()
{
    int numbers[5] = {10, 25, 40, 55, 70};
    int search;
    int found = 0;

    printf("Enter number to search: ");
    scanf("%d", &search);

    for(int i = 0; i < 5; i++)
    {
        if(numbers[i] == search)
        {
            found = 1;
            break;
        }
    }

    if(found == 1)
    {
        printf("Number found\n");
    }
    else
    {
        printf("Number not found\n");
    }

    return 0;
}