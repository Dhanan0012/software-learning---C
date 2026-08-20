#include <stdio.h>

int main()
{
    int age = 20;
    int *ptr = &age;

    printf("Age = %d\n", age);
    printf("Address of age = %p\n", &age);
    printf("Pointer = %p\n", ptr);
    printf("Value using pointer = %d\n", *ptr);

    return 0;
}