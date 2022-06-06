#include<stdio.h>
#include<math.h>
#define f(x) x*x*x-4*x+1
#define df(x) 3*x*x-4
#define e 0.001
int main()
{
    float x0,x1,x2,f1,f0,f2,df0;
    int choice,i=0,n;
    printf("enter the choice=");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("enter x0=");
        scanf("%f",&x0);
        fflush(stdin);
        printf("enter x1=");
        scanf("%f",&x1);
        if(f(x0)*f(x1)>0)
        {
            printf("invalid inputs");
        }
        else
        {
            do
            {
                f0=f(x0);
                f1=f(x1);
                x2=(x0+x1)/2;
                f2=f(x2);
                if(f0*f2<0)
                {
                    x1=x2;
                }
                else
                {
                    x0=x2;
                }
                i++;
                } while (fabs(f2)>e);
                printf("root=%f",x2);
                printf("\nnumber of iterrations=%d",i);   
        }
        break;
        case 2:
        printf("enter x0=");
        scanf("%f",&x0);
        fflush(stdin);
        printf("enter x1=");
        scanf("%f",&x1);
        if(f(x0)*f(x1)>0)
        {
            printf("invalid inputs");
        }
        else
        {
            do
            {
                f0=f(x0);
                f1=f(x1);
                x2=((x0*f1)-(x1*f0))/(f1-f0);
                f2=f(x2);
                if(f0*f2<0)
                {
                    x1=x2;
                }
                else
                {
                    x0=x2;
                }
                i++;
            } while (fabs(f2)>e);
            printf("root=%f",x2);
            printf("\nnumber of iterrations=%d",i);
        }
        break;
        case 3:
        printf("enter x0=");
        scanf("%f",&x0);
        printf("enter the maximum number of iterations=");
        scanf("%d",&n);
        do
        {
            f0=f(x0);
            df0=df(x0);
            if(df0==0.0)
            {
                printf("math error");
                break;
            }
            if(i<n)
            {
                x1=x0-f0/df0;
                i++;
                x0=x1;
                f1=f(x1);
            }
            
        } while (fabs(f1)>e);
        printf("root=%f",x1);
        printf("\nnumber of iterrations=%d",i);
        break;
        default:
        printf("invalid choice");
        break;
    }
    return 0;
}