#include <stdio.h>

void change(int *x)
{
    *x = 100;
}

int main()
{
    int number = 50;

    change(&number);

    printf("%d", number);

    return 0;
}