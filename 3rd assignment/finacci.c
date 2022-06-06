#include<stdio.h>
int main()
{
    int n,sum;
    printf("enter n=");
    scanf("%d",&n);
    int a=0,b=1;
    if(n>=2)
    {
        printf("%d,%d",a,b);
        for(int i=1;i<n-1;i++)
        {
            sum=a+b;
            printf(",%d",sum);
            a=b;
            b=sum;
        }
    }
    else if(n==1)
    printf("%d",a);
    else
    printf("invalid number of terms");
    return 0;
}