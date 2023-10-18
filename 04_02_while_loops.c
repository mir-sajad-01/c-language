#include<stdio.h>

int main()
{
    int a ;
    printf("what is your number buddy \n");
    scanf("%d", &a);
    while ( a<10)
    {
       //  a = 11;
       //  while ( a>10) { --- > These lines will lead to an infinite loop
            printf("%d \n",a);
            a ++ ;
         
    }
    return 0;
}