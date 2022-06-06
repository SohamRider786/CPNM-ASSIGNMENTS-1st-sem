#include<stdio.h>
int main()
{
    int n;
    printf("enter n=");
    scanf("%d",&n);
    int b=0;
    for(int i=1;i<=2*n-1;i++)
    {
        if(i<=n)
        {    
            for(int j=1;j<=n-i;j++)
            printf(" ");
            for(int j=1;j<=i;j++)
            printf("%d",j);
            if(i>=2)
            {
                for(int k=i-1;k>=1;k--)
                printf("%d",k);
            }
        }
        else if(i>n)
        {
            for(int j=1;j<=i-n;j++)
            printf(" ");
            for(int k=1;k<=2*n-i;k++)
            printf("%d",k);
            for(int c=2*n-i-1;c>=1;c--)
            printf("%d",c);
        }
        printf("\n");
    }
    return 0;
}