#include <stdio.h>

struct Student
{
    char name[20];
    int age;
    float marks;
};

float averageMarks(struct Student *ptr, int size)
{
    float sum = 0;

    for(int i = 0; i < size; i++)
    {
        sum = sum + (ptr + i)->marks;
    }

    return sum / size;
}

int main()
{
    struct Student students[3] =
    {
        {"Dhananjaya", 20, 85.5},
        {"Rohit", 21, 78.0},
        {"Apoorva", 20, 91.5}
    };

    float result = averageMarks(students, 3);

    printf("Average marks = %.2f\n", result);

    return 0;
}