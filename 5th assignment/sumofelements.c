#include<stdio.h>
int main()
{
    int arr[30];
    int *ptr;
    int l,sum=0;
    printf("enter the length of the array=");
    scanf("%d",&l);
    printf("enter the elements of the array:\n");
    for(int i=0;i<l;i++)
    scanf("%d",&arr[i]);
    ptr=&arr[0];//or ptr=&arr but error showing;
    for(int i=0;i<l;i++)
    {
        sum=sum+*(ptr);
        ptr=ptr+1;
    }
    printf("the sum of elements of array is=%d",sum);
    return 0;
}