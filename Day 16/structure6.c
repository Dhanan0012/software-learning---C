#include <stdio.h>

struct Student
{
    char name[20];
    int age;
    float marks;
};

void updateAge(struct Student *ptr)
{
    ptr->age = 21;
}

int main()
{
    struct Student s1 = {"Dhananjaya", 20, 85.5};

    printf("Before = %d\n", s1.age);

    updateAge(&s1);

    printf("After = %d\n", s1.age);

    return 0;
}