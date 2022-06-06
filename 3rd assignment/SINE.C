#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#define PI 3.14159265
double factorial(int n)
{
    if(n==0||n==1)
    return 1;
    else
    return n*factorial(n-1);
}
int main(int argc,char const* argv[])
{
    if(argc==3)
    {
        int x;
        double sum=0;
        float rad;
        x = atoi(argv[1]);
        printf("the given angle value is=%d\n",x);
        if(*argv[2]=='r'||*argv[2]=='R')
        rad=x;
        else if(*argv[2]=='d'||*argv[2]=='D')
        rad=PI*x/180;
        else if(*argv[2]=='g'||*argv[2]=='G')
        rad=x*0.015708;
        for(int i=1;i<=100;i++)
        {
            sum=sum+(double)(pow(-1,i-1)*pow(rad,2*i-1)/factorial(2*i-1));
        }
        printf("sin(%d%s) = %0.3f",x,argv[2],sum);
    }
    else
    {
        printf("invalid number of arguments in command line");
    }
    return 0;
}
