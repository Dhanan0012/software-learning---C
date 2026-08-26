#include <stdio.h>

struct Student
{
    char name[50];
    int age;
    float marks;
};

int main()
{
    struct Student s[2];

    for (int i = 0; i < 2; i++)
    {
        printf("Enter details for Student %d\n", i + 1);

        printf("Name: ");
        scanf("%49s", s[i].name);

        printf("Age: ");
        scanf("%d", &s[i].age);

        printf("Marks: ");
        scanf("%f", &s[i].marks);

        printf("\n");
    }

    printf("Student Details\n\n");

    for (int i = 0; i < 2; i++)
    {
        printf("Student %d\n", i + 1);
        printf("Name = %s\n", s[i].name);
        printf("Age = %d\n", s[i].age);
        printf("Marks = %.2f\n\n", s[i].marks);
    }

    return 0;
}