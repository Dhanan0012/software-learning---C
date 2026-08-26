#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[20];
    int age;
    float marks;
} Student;

int findStudent(Student students[], int size, char searchName[])
{
    for(int i = 0; i < size; i++)
    {
        if(strcmp(students[i].name, searchName) == 0)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    Student students[3] =
    {
        {"Dhananjaya", 20, 85.5},
        {"Rohit", 21, 78.0},
        {"Apoorva", 20, 91.5}
    };

    char searchName[20];

    printf("Enter student name: ");
    scanf("%19s", searchName);

    int result = findStudent(students, 3, searchName);

    if(result != -1)
    {
        printf("\nStudent Found\n");
        printf("Name = %s\n", students[result].name);
        printf("Age = %d\n", students[result].age);
        printf("Marks = %.2f\n", students[result].marks);
    }
    else
    {
        printf("\nStudent not found\n");
    }

    return 0;
}