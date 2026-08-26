#include <stdio.h>

typedef struct
{
    char name[20];
    int age;
    float marks;
} Student;

int main()
{
    Student students[3] =
    {
        {"Dhananjaya", 20, 85.5},
        {"Rohit", 21, 78.0},
        {"Apoorva", 20, 91.5}
    };

    for(int i = 0; i < 3; i++)
    {
        printf("Student %d\n", i + 1);
        printf("Name = %s\n", students[i].name);
        printf("Age = %d\n", students[i].age);
        printf("Marks = %.2f\n\n", students[i].marks);
    }

    return 0;
}