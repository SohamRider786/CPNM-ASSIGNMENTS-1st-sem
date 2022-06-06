#include<stdio.h>
#include<stdio.h>
#include<math.h>
void main()
{
    int n=1,num=10,d;
    printf("the 1st 10 happy numbers are as follows:-\n");
    for(int c=0;c<10;)
    {
        num=n;
        do
        {
            int sum=0;
            for(int i=num;i>0;i=i/10)
            {
                d=i%10;
                sum=sum+d*d;
            }
            num=sum;
        }while (num>9); 
        if(num==1)
        {
            printf("%d\t",n);
            c++;
        }
        n++;
    }
}