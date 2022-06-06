#include<stdio.h>
#include<math.h>
int main()
{
    int n,c=0,sum=0;
    printf("enter the perfect square number = ");
    scanf("%d",&n);
    for(int i=1;i<n;i=i+2)
    {
        sum=sum+i;
        c++;
        if(sum==n)
        break;
    }
    printf("the square root of %d is = %d",n,c);//sum of n consecutive numbers = n*n
    return 0;
}