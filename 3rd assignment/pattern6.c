#include<stdio.h>
int main()
{
    int n,d=2;
    printf("enter n=");
    scanf("%d",&n);
    int c=n,f=2*n-3;
    for(int i=1;i<=2*n+1;i++)
    {
            if(i==1||i==2*n+1)
            {
                for(int j=1;j<=2*n+1;j++)
                printf("*");
            }
            if(i>=2&&i<=n+1)
            {
                for(int j=1;j<=c;j++)
                printf("*");
                for(int k=1;k<=2*i-3;k++)
                printf(" ");
                for(int j=1;j<=c;j++)
                printf("*");
                c--;
            }
            if(i>=n+2&&i<=2*n)
            {
                for(int j=1;j<=d;j++)
                printf("*");
                for(int j=1;j<=f;j++)
                printf(" ");
                f=f-2;
                for(int j=1;j<=d;j++)
                printf("*");
                d++;
            }
            printf("\n");
    }
    return 0;
}