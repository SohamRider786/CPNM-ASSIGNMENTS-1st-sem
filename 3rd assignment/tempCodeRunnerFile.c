#include<stdio.h>
int main()
{
    int n,c,d;
    printf("enter n=");
    scanf("%d",&n);
    c=n;
    d=c;
    for(int i=1;i<=n-1;i++)
    {
        for(int j=1;j<=2*n-1-2*i;j++)
        {
            printf("%d",c);
            c--;
        }
        d--;
        c=d;
        printf("\n");
    }
    return 0;
}