#include <stdio.h>

int main()
{
    int resister ; 
    float current ;
    float voltage ;

    printf("Enter the resistance: ");
    scanf("%d", &resister);

    printf("Enter the current: ");
    scanf("%f", &current);
    voltage = resister * current ;
    printf("The voltage is %f\n", voltage);

    return 0;
}