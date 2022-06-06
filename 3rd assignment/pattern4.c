#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("enter n=");
    scanf("%d",&n);
    int k=n-1;
    for(int i=1;i<=2*n-1;i++)
    {
        if(i<=n)
        {
            for(int j=1;j<=n-i;j++)
            printf(" ");
            for(int j=1;j<=2*i-1;j=j+1)
            printf("*");
        }
        else
        {
            
            for(int j=1;j<=i-n;j++)
            printf(" ");
            for(int j=1;j<=2*k-1;j++)
            printf("*");
            if(k==1)
            break;
            k--;
        }
        printf("\n");
    }
    return 0;
}