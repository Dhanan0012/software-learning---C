#include <stdio.h>

typedef struct
{
    char name[20];
    int age;
    float marks;
} Student;

int main()
{
    Student s1 = {"Dhananjaya", 20, 85.5};
    Student s2 = {"Rohit", 21, 78.0};

    printf("Student 1\n");
    printf("Name = %s\n", s1.name);
    printf("Age = %d\n", s1.age);
    printf("Marks = %.2f\n\n", s1.marks);

    printf("Student 2\n");
    printf("Name = %s\n", s2.name);
    printf("Age = %d\n", s2.age);
    printf("Marks = %.2f\n", s2.marks);

    return 0;
}