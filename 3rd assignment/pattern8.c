#include<stdio.h>
int main()
{
    int n,k;
    printf("enter n=");
    scanf("%d",&n);
    for(int i=1;i<=2*n-1;i++)
    {
        if(i%2!=0)
        {
            int k=(i+1)/2;
            for(int j=1;j<=n-k;j++)
            printf("  ");
            for(int j=1;j<=k;j++)
            printf("%d ",j);
            for(int j=k-1;j>=1;j--)
            printf("%d ",j);
        }
        else
        {
            int d=i/2;
            for(int j=2*n-1-i;j>=1;j--)
            printf(" ");
            for(int j=1;j<=d;j++)
            printf("%d ",j);
            for(int j=d;j>=1;j--)
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}