#include <stdio.h>

int main()
{
    for (int count = 1; count <= 10; count++)
    {
        if (count == 8)
        {
            break;
        }

        printf("%d\n", count);
    }

    return 0;
}