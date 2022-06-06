#include<stdio.h>
int factorial(int a)
{
    if(a==0||a==1)
    return 1;
    else
    return a*factorial(a-1);
}
int sumoffact(int a)
{
    int sum1=0;
    for(int i=1;i<=a;i++)
    {
        if(a%i==0)
        sum1=sum1+i;
    }
    return sum1;
}
int main()
{
    char c;
    printf("enter choice=");
    scanf("%c",&c);
    int n,sum=0;
    fflush(stdin);
    printf("enter n=");
    scanf("%d",&n);
    switch (c)
    {
        case 'a':
        for(int i=1;i<=n;i++)
        {
            sum=sum+i;
        }
        printf("the sum is %d",sum );
        break;
        case 'b':
        for(int i=1;i<=n;i++)
        {
            sum=sum+i*(i+1);
        }
        printf("the sum is %d",sum );
        break;
        case 'c':
        for(int i=1;i<=n;i++)
        {
            int k=factorial(i);
            sum=sum+k;
        }
        printf("the sum is %d",sum);
        break;
        case 'd':
        for(int i=1;i<=n;i++)
        {
            int b=sumoffact(i);
            sum=sum+b;
        }
        printf("the sum is %d",sum);
        break;
        default:
        printf("invalid choice ");
        break;
    }
    return 0;
}