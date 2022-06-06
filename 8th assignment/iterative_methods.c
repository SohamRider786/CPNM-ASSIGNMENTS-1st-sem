#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define e 0.001
void input(double a[20][20],int n)
{
    printf("enter the augmented matrix(coefficients):-\n");
    int i,j;
    for(i=0;i<n;i++)
    {
        printf("enter the coefficients of the equation number %d\n",i+1);
        for(j=0;j<n+1;j++)
        {
            scanf("%lf",&a[i][j]);
        }
    }
}
void print_augmented_matrix(double a[20][20],int n)
{
    printf("\nthe matrix is:-\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n+1;j++)
        {
            if(j==n)
            printf(":%.0lf\t",a[i][j]);
            else
            printf("%.0lf\t",a[i][j]);
        }
        printf("\n");
    }
}
void guass_elimination(double a[20][20],int n)
{
    double temp;
    int i,j,k;
    double x[10];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j>i)
            {
                temp=a[j][i]/a[i][i];
                for(k=0;k<n+1;k++)
                {
                    a[j][k]=a[j][k]-(temp*a[i][k]);
                }
            }
        }
    }
   x[n-1]=a[n-1][n]/a[n-1][n-1];
   for(i=n-2;i>=0;i--)
   {
       double sum=0.0;
       for(j=i+1;j<=n;j++)
       {
           sum=sum+a[i][j]*x[j];
       }
       x[i]=(a[i][n]-sum)/a[i][i];
   }
   printf("the solution is:\n");
   for(i=0;i<n;i++)
   printf("%0.3lf\t",x[i]);
}
void jacobis_method(double a[20][20],int n)
{
    int m,c=1,j,i,k;
    printf("enter the maximum number of iterations=");
    scanf("%d",&m);
    double x_old[100];
    double x_new[100];
    double sum=0.0;
    for(i=0;i<n;i++)
    x_old[i]=0;
    for(k=0;k<m;k++)
    {
        for(i=0;i<n;i++)
        {
            sum=0;
            for(j=0;j<n;j++)
            {
                if(i!=j)
                sum=sum+(a[i][j])*x_old[j];
            }
            x_new[i]=(a[i][n]-sum)/a[i][i];
        }
        for(i=0;i<n;i++)
        {
            if(fabs(x_old[i]-x_new[i])<e)
            {
                c=0;
            }
            else
            c=1;
        }
        if(c==1)
        {
            for(j=0;j<n;j++)
            {
                x_old[j]=x_new[j];
            }
        }
        else
        break;
    }
    printf("the solutions are:\n");
    for(k=0;k<n;k++)
    printf("%.3lf\t",x_new[k]);
}
void pivoting_method(double a[20][20],int n)
{
    double temp;
    int i,j,k;
    double x[10];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n+1;j++)
        {
            if(j!=i)
            {
                temp=a[j][i]/a[i][i];
                for(k=0;k<n+1;k++)
                {
                    a[j][k]=a[j][k]-(temp*a[i][k]);
                }
            }
        }
    }
    for(i=0;i<n;i++)
    {
        x[i]=a[i][n]/a[i][i];
    }
    printf("the solutions are as follows:-\n");
    for(i=0;i<n;i++)
    {
        printf("%0.3lf\t",x[i]);
    }
}
int main()
{
    int n,choice;
    double arr[20][20];
    printf("the number of equations=");
    scanf("%d",&n);
    input(arr,n);
    print_augmented_matrix(arr,n);
    printf("enter the choice:-\n1.GUASS ELIMINATION\n2.JACOBI METHOD\n3.PIVOTING METHOD\n=");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        guass_elimination(arr,n);
        print_augmented_matrix(arr,n);
        break;
        case 2:
        jacobis_method(arr,n);
        break;
        case 3:
        pivoting_method(arr,n);
        break;
        default:
        printf("invalid choice");
    }
    return 0;
}