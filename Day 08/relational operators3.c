#include <stdio.h>

int main()
{
    int voltage ;
    printf("Enter the voltage value: ");    
    scanf("%d", &voltage);
    if(voltage > 0 )
    {
        printf("Voltage is normal\n");
        if(voltage > 220)
        {
            printf("Voltage is high\n");
        }
    }
        else
        {
            printf("Voltage is low\n");
        }
    

    return 0;
}