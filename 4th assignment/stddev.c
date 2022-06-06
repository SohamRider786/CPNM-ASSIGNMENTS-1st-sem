#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int * arr;
    int l;
    double mean,sum=0,sum1=0,s;
    printf("enter the length of the array=");
    scanf("%d",&l);
    arr=(int*)malloc(l*sizeof(int));
    for(int i=0;i<l;i++)
    scanf("%d",&arr[i]);
    for(int i=0;i<l;i++)
    sum+=arr[i];
    mean=sum/l;
    printf("the elements of the array is:-\n");
    for(int i=0;i<l;i++)
    printf("%d\t",arr[i]);
    printf("\nmean=%f",mean);
    for(int i=0;i<l;i++)
    {
        sum1+=pow(arr[i]-mean,2);
    }
    s=sqrt(sum1/(l-1));
    printf("\nthe standard deviation is=%0.2f",s);
    free(arr);
    return 0;
}