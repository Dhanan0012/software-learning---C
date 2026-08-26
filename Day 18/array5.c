#include <stdio.h>

typedef struct
{
    char name[20];
    int age;
    float marks;
} Student;

void displayStudent(Student s)
{
    printf("Name = %s\n", s.name);
    printf("Age = %d\n", s.age);
    printf("Marks = %.2f\n", s.marks);
}

int main()
{
    Student s1 = {"Dhananjaya", 20, 85.5};

    displayStudent(s1);

    return 0;
}