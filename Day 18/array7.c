#include <stdio.h>

typedef struct
{
    char name[20];
    int age;
    float marks;
} Student;

Student createStudent()
{
    Student s = {"Dhananjaya", 20, 85.5};

    return s;
}

int main()
{
    Student s1;

    s1 = createStudent();

    printf("Name = %s\n", s1.name);
    printf("Age = %d\n", s1.age);
    printf("Marks = %.2f\n", s1.marks);

    return 0;
}