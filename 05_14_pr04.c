#include<stdio.h>
int fib (int n);

int main()
{
    int n = 10;
    printf("the fibnocci series is %d \n", fib ( 10));
    
    return 0;
}
int fib(int n)
{
    if (n <= 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    else 
    {
        return (fib (n-1) + fib (n-2));
    }
}