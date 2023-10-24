#include<stdio.h>
float temperature(float celsius);
int main()
{
    float celsius ;
    printf(" what is the temperature in celsius \n");
    scanf("%f", &celsius);
    printf("The temperature of fahrenheit in celsius is %f \n " , temperature ( celsius));

    
    return 0;
}
float temperature ( float celsius)
{
    float fahren ;
    fahren = ((9 / 5) * celsius ) + 32 ;
    return fahren;
}