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

int countAboveAverage(struct Student *ptr, int size, float average)
{
    int count = 0;

    for(int i = 0; i < size; i++)
    {
        if((ptr + i)->marks > average)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    struct Student students[3] =
    {
        {"Dhananjaya", 20, 85.5},
        {"Rohit", 21, 78.0},
        {"Apoorva", 20, 91.5}
    };

    float average = averageMarks(students, 3);

    int result = countAboveAverage(students, 3, average);

    printf("Average Marks = %.2f\n", average);
    printf("Students above average = %d\n", result);

    return 0;
}