#include <stdio.h>

struct Student
{
    char name[20];
    int age;
    float marks;
};

int main()
{
    struct Student s1 = {"Dhananjaya", 20, 85.5};

    struct Student *ptr = &s1;

    printf("Before: %d\n", s1.age);

    ptr->age = 21;

    printf("After: %d\n", s1.age);

    return 0;
}