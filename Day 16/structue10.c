#include <stdio.h>

struct Student
{
    char name[20];
    int age;
    float marks;
};

void displayStudents(struct Student *ptr, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("Student %d\n", i + 1);
        printf("Name = %s\n", (ptr + i)->name);
        printf("Age = %d\n", (ptr + i)->age);
        printf("Marks = %.2f\n\n", (ptr + i)->marks);
    }
}

int main()
{
    struct Student students[3] =
    {
        {"Dhananjaya", 20, 85.5},
        {"Ram", 21, 78.0},
        {"sitha", 20, 91.5}
    };

    displayStudents(students, 3);

    return 0;
}