#include <stdio.h>
int main()
{
   int motor;
    printf("Enter the motor value: ");  
    scanf("%d", &motor);
    switch(motor)
    {
        case 1:
            printf("Motor is ON\n");
            break;
        case 2:
            printf("Motor is OFF\n");
            break;
        case 3:
            printf("motor is in reverse\n");
            break;
            case 4:
            printf("exit\n");
            break;
        default:
            printf("Invalid motor value\n");
    }
}