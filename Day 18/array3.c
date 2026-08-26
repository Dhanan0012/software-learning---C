#include <stdio.h>

typedef struct
{
    char name[20];
    int age;
    float marks;
} Student;

int main()
{
    Student students[3];

    students[0].age = 20;
    students[0].marks = 85.5;

    students[1].age = 21;
    students[1].marks = 78.0;

    students[2].age = 20;
    students[2].marks = 91.5;

    printf("Student 1 Age = %d\n", students[0].age);
    printf("Student 1 Marks = %.2f\n", students[0].marks);

    printf("Student 2 Age = %d\n", students[1].age);
    printf("Student 2 Marks = %.2f\n", students[1].marks);

    printf("Student 3 Age = %d\n", students[2].age);
    printf("Student 3 Marks = %.2f\n", students[2].marks);

    return 0;
}