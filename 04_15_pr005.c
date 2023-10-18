#include<stdio.h>

int main()
{
    int n, i = 0 ;
    printf("what is your number \n");
    scanf("%d", &n );
    do
    {
        printf("the numbers are %d \n", n + i);
        i++;
    } while ( i < 5);
    
    
    return 0;
}