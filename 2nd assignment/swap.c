#include<stdio.h>
int main ()
{
    int a,b;
    printf("enter the two numbers respectively\n");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the new swaped values respectively are  %d and %d",a,b);
    return 0;
}