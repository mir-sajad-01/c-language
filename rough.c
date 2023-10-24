#include<stdio.h>
void change (int a);

int main()
{
    int a = 344 , b ;
    printf( "The value of a before change is %d \n",a);
    change (b);
    printf("The value of a after change is %d \n",a);
    return 0;
}
void change (int a ){
    a = 77 ;
}