#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int a[10][10];
    int b[10][10];
    int n,choice;
    int c[10][10];
    printf("enter the number of rows/columns of 1st & 2nd array=");
    scanf("%d",&n);
    printf("enter the 1st array=");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the 2nd array=");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("1 for sum , 2 for difference and 3 for product");
    printf("enter the choice=");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("the reslutant array is:-\n");
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                c[i][j]=a[i][j]+b[i][j];
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
        break;
        case 2:
        printf("the reslutant array is:-\n");
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                c[i][j]=a[i][j]-b[i][j];
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
        break;
        case 3:
        printf("the reslutant array is:-\n");
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                int sum=0;
                for(int c=0;c<n;c++)
                {
                    sum+=a[i][c]*b[c][j];
                }
                c[i][j]=sum;
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
        break;
        default:
        printf("invalid choice");
    }
    return 0;
}