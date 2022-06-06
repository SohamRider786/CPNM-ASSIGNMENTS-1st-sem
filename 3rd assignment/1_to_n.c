#include<stdio.h>
int main()
{
    int n;
    char c;
    int di,num1=0;
    int d,sum=0;
    int rem,oct=0,num=0,digit;
    double product=1;
    printf("enter n=");
    scanf("%d",&n);
    fflush(stdin);
    printf("enter the choice = ");
    scanf("%c",&c);
    switch (c)
    {
        case 'a':
            for(int i=1;i<=100;i++)
            {
                if(i%n==0)
                printf("%d ",i);
            }
        break;
        case 'b':
            printf("the prime factors between 1 and %d are as follows ",n);
            for(int i=1;i<=n;i++)
            {
                int k=0;
                for(int j=2;j<i;j++)
                {
                    if(i%j==0)
                    k++;
                }
                if(k==0)
                printf("%d ",i);
            }
        break;
        case 'c':
            printf("the prime factors of %d are as as follows \n",n);
            for(int i=1;i<=n;i++)
            {
                if(n%i==0)
                {
                    int c=0;
                    for(int j=2;j<i;j++)
                    {
                        if(i%j==0)
                        c++;    
                    }
                    if(c==0)
                    printf("%d\t",i);
                }

            }
        break;
        case 'd':
            printf("octal equivalent of %d is ",n);
                while(n!=0)
            {
                rem=n%8;
                n=n/8;
                num=num*10+rem;
            }
            for(int i=num;i>0;i/=10)
            {
                digit=i%10;
                oct=oct*10+digit;
            }
            printf("%d",oct);
        break;
        case 'e':
            for(int i=n;i>0;i/=10)
            {
                d=i%10;
                sum =sum+d;
            }
            printf("the sum of digits is %d",sum);
        break;
        case 'f':
            for(int i=1;i<=n;i++)
            {
            product=product*i;
            }
            printf("the factorial of, %d! is %f",n,product);
        break;
        case 'g':
            for(int i=n;i>0;i/=10)
            {
                di=i%10;
                num1=num1*10+di;
            }
            printf("the reverse of %d is %d",n,num1);
        break;
        default:
            printf("invalid choice");
        break;
    }
    return 0;
}