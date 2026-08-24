#include <stdio.h>

struct Student
{
    char name[20];
    int age;
    float marks;
};

int findTopStudent(struct Student *ptr, int size)
{
    int highest = 0;

    for(int i = 1; i < size; i++)
    {
        if((ptr + i)->marks > (ptr + highest)->marks)
        {
            highest = i;
        }
    }

    return highest;
}

int main()
{
    struct Student students[3] =
    {
        {"Dhananjaya", 20, 85.5},
        {"Ram", 21, 78.0},
        {"sitha", 20, 91.5}
    };

    int result = findTopStudent(students, 3);

    printf("Top Student = %s\n", students[result].name);
    printf("Highest Marks = %.2f\n", students[result].marks);

    return 0;
}