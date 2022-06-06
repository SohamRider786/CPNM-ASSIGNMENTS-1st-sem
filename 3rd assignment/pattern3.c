#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("enter n=");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=n-i;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        if(i>=2)
        {
            for(int k=i-1;k>=1;k--)
            {
                printf("%d",k);
            }
        }
        printf("\n");
    }
    return 0;
}