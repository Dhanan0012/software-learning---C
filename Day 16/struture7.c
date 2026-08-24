#include <stdio.h>

struct Student
{
    char name[20];
    int age;
    float marks;
};

void updateStudent(struct Student *ptr, int newAge, float newMarks)
{
    ptr->age = newAge;
    ptr->marks = newMarks;
}

int main()
{
    struct Student s1 = {"Dhananjaya", 20, 85.5};

    printf("Before:\n");
    printf("Age = %d\n", s1.age);
    printf("Marks = %.2f\n", s1.marks);

    updateStudent(&s1, 21, 90.0);

    printf("\nAfter:\n");
    printf("Age = %d\n", s1.age);
    printf("Marks = %.2f\n", s1.marks);

    return 0;
}