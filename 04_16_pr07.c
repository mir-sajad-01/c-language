#include<stdio.h>

int main()
{
    int sum = 0;
    int n ;
    for ( int i = 1 ; i <= 10 ; i ++)
    {
        n = 8 * i ;
        printf("8 x %d = %d \n " , i , n);
        sum += n;
    }
    printf("sum of the multiplies of  8 is %d \n", sum );
    return 0;
}