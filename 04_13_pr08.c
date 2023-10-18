#include<stdio.h>

int main()
{
    // int factorial = 1 ;
    // for(int i = 1 ; i <= 6 ; i ++)
    // {
    //     factorial *= i;
    // }
    // printf("The factorial of 6 is %d \n" , factorial );

    int i = 1 , factorial = 1;
    while ( i < 6 )
    {
        i ++ ;
        factorial *= i;
    }
    printf("The factorial of 6 is %d \n", factorial );
    return 0;
}