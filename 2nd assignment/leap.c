#include<stdio.h>
int main()
{
    int year;
    printf("enter the year = ");
    scanf("%d",&year);
    if(year%4==0)
    printf("it is a leap year");
    else
    printf("not a leap year");
    return 0;
}