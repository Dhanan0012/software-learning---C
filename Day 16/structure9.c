#include <stdio.h>

struct Student
{
    char name[20];
    int age;
    float marks;
};

int main()
{
    struct Student students[3] =
    {
        {"Dhananjaya", 20, 85.5},
        {"Rohit", 21, 78.0},
        {"Apoorva", 20, 91.5}
    };

    struct Student *ptr = students;

    for(int i = 0; i < 3; i++)
    {
        printf("Student %d\n", i + 1);
        printf("Name = %s\n", (ptr + i)->name);
        printf("Age = %d\n", (ptr + i)->age);
        printf("Marks = %.2f\n\n", (ptr + i)->marks);
    }

    return 0;
}