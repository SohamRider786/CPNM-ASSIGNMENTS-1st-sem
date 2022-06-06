#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define f(x) x*x
void trapezodial_rule(double a,double b,double n)
{
    double h,sum=0,fx,c;
    h=(b-a)/n;
    sum=f(a)+f(b);
    for(int i=1;i<=n-1;i++)
    {
        c=a+i*h;
        sum=sum+2*f(c);
    }
    sum=(sum*((b-a)/n))/2;
    printf("the area under the curve x*x from %.2f to %.2lf is=%lf",a,b,sum);
}
void simpsons_1_3_method(double a,double b,double n)
{
    double h,sum=0,c;
    h=fabs(b-a)/n;
    for(int i=0;i<=n;i++)
    {
        c=a+i*h;
        if(i==0)
        sum+=f(c);
        else if(i%2==0)
        sum+=2*f(c);
        else
        sum+=4*f(c);
    }
    sum=h*sum/3;
    printf("the area under the curve x*x from %.2f to %.2lf is=%lf",a,b,sum);
}
void integrate(double a,double b,double choice,double n)
{
   if(choice==1.00)
   trapezodial_rule(a,b,n);
   else if(choice==2.00)
   simpsons_1_3_method(a,b,n);
   else
   printf("invalid choice");
}
int main(int argc,const char* argv[])
{
    double choice,n,a,b;
    printf("1.trapezoidal rule\n2.simpsons 1/3 rd rule\nenter the choice=");
    scanf("%lf",&choice);
    printf("enter the number of divisions=");
    scanf("%lf",&n);
    a=atoi(argv[1]);
    b=atoi(argv[2]);
    integrate(a,b,choice,n);
    return 0;
}