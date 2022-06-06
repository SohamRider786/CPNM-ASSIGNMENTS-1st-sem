#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void input(float f[10][10],int n)
{
    printf("enter the values of x and f(x) respectively\n");
    fflush(stdin);
    for(int i=0;i<n;i++)
    {
        printf("value of x%d=",i+1);
        scanf("%f",&f[i][0]);
        printf("value of f(x%d)=",i+1);
        scanf("%f",&f[i][1]);
    }
}
void show_input(float f[10][10],int n)
{
    printf("the inputs are as follows:-\n x\tf(x)\n");
    for(int i=0;i<n;i++)
    {
        printf("%.3f\t%.3f\n",f[i][0],f[i][1]);
    }
}
int factorial(int n)
{
    if((n==0)||(n==1))
    return 1;
    else
    return (n*factorial(n-1));
}
double compute_val(float f[10][10],int n,int c,float u)
{
    double sum=0;
    double product=1.00;
    float a=u;
    for(int j=1;j<=n;j++)
    {
        if(c==1)
        {
            for(int i=0;i<j-1;i++)
            {
                product=product*a;
                a--;
            }
            sum=sum+((product*f[0][j])/factorial(j-1));
        }
        else
        {
            for(int i=0;i<j-1;i++)
            {
                product=product*a;
                a++;
            }
            sum=sum+((product*f[n-1][j])/factorial(j-1));
        }
        product=1;
        a=u;
    }
    return sum;
}
void newtons_forward_difference(float f[10][10],int n,float x)
{
    float diff,a,h,u;
    double sum=0;
    int k=n;
    for(int j=1;j<=n;j++)
    {
        for(int i=0;i<k-1;i++)
        {
            diff=f[i+1][j]-f[i][j];
            f[i][j+1]=diff;
            diff=0;
        }
        k--;
    }
    h=f[1][0]-f[0][0];
    a=f[0][0];
    u=(x-a)/h;
    printf("f(%f)=%lf",x,compute_val(f,n,1,u));
}
void newtons_backward_difference(float f[10][10],int n,float x)
{
    float diff,a,h,u;
    double sum=0;
    for(int j=1;j<=n;j++)
    {
        for(int i=n-1;i>j-1;i--)
        {
            diff=f[i][j]-f[i-1][j];
            f[i][j+1]=diff;
            diff=0;
        }
    } 
    a=f[n-1][0];
    h=f[n-1][0]-f[n-2][0];
    u=(x-a)/h;
    printf("f(%f)=%lf",x,compute_val(f,n,0,u));
}
void lagranges_formula(float f[10][10],int n,float x)
{
    double numerator,denominator,sum=0;
    for(int i=0;i<n;i++)
    {
        numerator=f[i][1];
        denominator=1;
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                numerator*=(x-f[j][0]);
                denominator*=(f[i][0]-f[j][0]);
            }
        }
        sum=sum+numerator/denominator;
    }
    printf("the value of f(%f)=%lf",x,sum);
}
int main()
{
    int choice,n;
    float f[10][10],x;
    fflush(stdin);
    printf("enter the number of entries=");
    scanf("%d",&n);
    printf("\n1.newtons forward difference formula\n2.newtons backward difference formula\n3.lagranges formula\nenter the choice=");
    fflush(stdin);
    scanf("%d",&choice);
    printf("enter the inputs:-\n");
    fflush(stdin);
    input(f,n);
    printf("enter the value at which you want the function value=");
    scanf("%f",&x);
    show_input(f,n);
    switch(choice)
    {
        case 1:
        newtons_forward_difference(f,n,x);
        break;
        case 2:
        newtons_backward_difference(f,n,x);
        break;
        case 3:
        lagranges_formula(f,n,x);
        break;
        default:
        printf("invalid choice");
        break;
    }
    return 0;
}