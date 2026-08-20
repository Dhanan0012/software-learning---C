#include <stdio.h>

int main()
{
    int age = 20;
    int *ptr = &age;

    printf("Before = %d\n", age);

    *ptr = 25;

    printf("After = %d\n", age);

    return 0;
}