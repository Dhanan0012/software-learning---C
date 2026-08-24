#include <stdio.h>
#include <string.h>

struct Student
{
    char name[20];
    int age;
    float marks;
};

int main()
{
    struct Student students[3];

    strcpy(students[0].name, "Dhananjaya");
    students[0].age = 20;
    students[0].marks = 85.5;

    strcpy(students[1].name, "Ram");
    students[1].age = 21;
    students[1].marks = 78.0;

    strcpy(students[2].name, "sitha");
    students[2].age = 20;
    students[2].marks = 91.5;

    for(int i = 0; i < 3; i++)
    {
        printf("Student %d\n", i + 1);
        printf("Name = %s\n", students[i].name);
        printf("Age = %d\n", students[i].age);
        printf("Marks = %.2f\n\n", students[i].marks);
    }

    return 0;
}