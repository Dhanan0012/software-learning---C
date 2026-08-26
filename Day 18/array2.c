#include <stdio.h>

struct Student
{
    char name[50];
    int age;
    float marks;
};

int main()
{
    struct Student s[3];
    int highest = 0;

    for (int i = 0; i < 3; i++)
    {
        printf("Enter details of Student %d\n", i + 1);

        printf("Name: ");
        scanf("%49s", s[i].name);

        printf("Age: ");
        scanf("%d", &s[i].age);

        printf("Marks: ");
        scanf("%f", &s[i].marks);

        printf("\n");
    }

    for (int i = 1; i < 3; i++)
    {
        if (s[i].marks > s[highest].marks)
        {
            highest = i;
        }
    }

    printf("Student with Highest Marks\n");
    printf("Name = %s\n", s[highest].name);
    printf("Age = %d\n", s[highest].age);
    printf("Marks = %.2f\n", s[highest].marks);

    return 0;
}