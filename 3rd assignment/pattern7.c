#include<stdio.h>
int main()
{
    int n;
    printf("enter n=");
    scanf("%d",&n);
    int d=2*n-5;
    for(int i=1;i<=2*n-1;i++)
    {
        if(i<=n)
        {    
            for(int j=1;j<=n-i;j++)
            {
                printf(" ");
            }
            printf("*");
            for(int j=1;j<=2*i-3;j++)
            printf(" ");
            if(i>=2&&i<=n)
            {
                printf("*");
            }
        }
        else
        {
            for(int j=1;j<=i-n;j++)
            printf(" ");
            printf("*");
            for(int j=1;j<=d;j++)
            printf(" ");
            d=d-2;
            if(i<2*n-1)
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;   
}