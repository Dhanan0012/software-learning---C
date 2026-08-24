#include <stdio.h>

struct Student
{
    char name[20];
    int age;
    float marks;
};

void displayStudent(struct Student *ptr)
{
    printf("Name = %s\n", ptr->name);
    printf("Age = %d\n", ptr->age);
    printf("Marks = %.2f\n", ptr->marks);
}

int main()
{
    struct Student s1 = {"Dhananjaya", 20, 85.5};

    displayStudent(&s1);

    return 0;
}