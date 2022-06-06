#include<stdio.h>
#include<math.h>
int main()
{
    int a[4],b[4],diff[100];
    int k=0,f=0;
    printf("enter the number (digit wise)=");
    for(int i=0;i<4;i++)
    scanf("%d",&a[i]);
    while(1)
    {
        
        int temp,num1=0,num2=0;
        for(int i=0;i<3;i++)
        {
            for(int i=0;i<3;i++)
            {
                if(a[i]>a[i+1])
                {
                    temp=a[i];
                    a[i]=a[i+1];
                    a[i+1]=temp;
                }
            }
        }
        for(int i=0;i<4;i++)
        {
            b[i]=a[4-i-1];
        }
        for(int i=0;i<4;i++)
        {
            num1=num1*10+a[i];
        }
        for(int i=0;i<4;i++)
        {
            num2=num2*10+b[i];
        }
        if(num2>num1)
        k=num2-num1;
        else
        k=num1-num2;
        diff[f++]=k;
        if((f>=2)&&(diff[f-1]==diff[f-2]))
        {
            k=diff[f-1];
            break;
        }
        int c=0;
        for(int i=k;i>0;i/=10)
        c++;
        int l=3;
        if(c==4)
        {
            for(int i=k;i>0;i/=10)
            {
                a[l--]=i%10;
            }
            l=3;
        }
        else if(c<4)
        {
            int g=3;
            for(int i=k;i>0;i=i/10)
            {
                if((g<=l-c)&&(g>=0))
                {
                    a[g--]=0;
                }
                else
                {
                    a[g--]=i%10;
                }
            }
        }
    }
    printf("the kaprekar constant is=%d",k);
    return 0;
}