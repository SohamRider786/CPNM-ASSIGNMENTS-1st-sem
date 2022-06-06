#include<stdio.h>
#include<stdlib.h>
#include <math.h>
#include<limits.h>
#define e 0.001
double f(double x,double c)
{
    return x*tan(x)-c;
}
double df(double x)
{
    return tan(x)+x*(1/(cos(x)*cos(x)));
}
void bisection_method(double x0,double x1,double c)
{
    double f0,f1,f2,x2,a,b;
    a=x0;
    b=x1;
    int k=0;
    printf("\n  f(x0)\t         f(x1)\t      f(x2)\n");
    do
    {
        f0=f(a,c);
        f1=f(b,c);
        if(f0*f1>0)
        {
           printf("no root can be found between %lf & %lf",x0,x1);
           k=1;
        }
        x2=(a+b)/2;
        f2=f(x2,c);
        printf("\n%lf\t%lf\t%lf",f0,f1,f2);//printing f1,f0.
        if(f0*f2>0)
        {
            a=x2;
        }
        else
        {
            b=x2;
        }
    } while (fabs(f2)>e);
    if(k==1)
    printf("no root could be found between %lf and %lf",x0,x1);
    else
    printf("\nthe root using newton ralphson methos is=%lf\n",x2);
}
void newton_ralphson_method(double x0,double c,int n)
{
    double g,f0,df0,f1,df1;
    double x1;
    int i=0,k=0;
    g=x0;
    printf("\n  x1\t          f(x1)\t          df(x1)\n");
    do
    {
        f0=f(g,c);
        df0=df(g);
        if(df0==0)
        {
            printf("math error");
            k=1;
            break;
        }
        if(i<n)
        {
            x1=g-(f0/df0);
            i++;
            f1=f(x1,c);
            df1=df(x1);
            printf("%lf\t%lf\t%lf\n",x1,f1,df1);//printing x1,f1,df1
            g=x1;
        }
    } while (fabs(f1)>e);
    if(k==0)
    {
        printf("\nthe root using newton ralphson method =%lf\n",x1);
    }
    else
    printf("\nthe root could not be found\n");
}
int main()
{
    double c;
    int n;
    printf("enter the value of c=");
    scanf("%lf",&c);  
    fflush(stdin);
    double x0,x1,f0,f1;
    double root;
    int choice;
    for(int i=0;i<3;i++)
    {
        printf("\nenter the details of the root number %d:\n",i+1);
        printf("enter the choice:=\n1:bisection method\n2:newton ralphson method\n=");
        scanf("%d",&choice);
        if(choice==1)
        {
            printf("enter the value of x0=");
            scanf("%lf",&x0);
            fflush(stdin);
            printf("enter the value of x1=");
            scanf("%lf",&x1);
            bisection_method(x0,x1,c);
        }
        else if(choice==2)
        {
            printf("enter the value of x0=");
            scanf("%lf",&x0);
            fflush(stdin);
            printf("enter the maximum number of iterations=");
            scanf("%d",&n);
            newton_ralphson_method(x0,c,n);
        }
            else
            printf("invalid choice");
    }
    return 0;       
}          