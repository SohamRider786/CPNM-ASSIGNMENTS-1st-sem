#include<stdio.h>
void main()
{
    int a,i,d,sum=0;
    printf("enter the three digit number");
    scanf("%d",&a);
    for(i=a;i>0;i/=10)
    {
        d=i%10;
        sum=sum+d;
    }
    printf("sum of digits is %d",sum);
}