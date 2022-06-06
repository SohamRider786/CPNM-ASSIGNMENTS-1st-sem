#include<stdio.h>
#include<stdlib.h>
int main()
{
    int l,max=0,min;
    int* arr;
    printf("enter the length of the array=");
    scanf("%d",&l);
    arr=(int*)calloc(l,sizeof(int));
    printf("enter the elements of the array:-\n");
    for(int i=0;i<l;i++)
    scanf("%d",&arr[i]);
    min=arr[0];
    for(int i=0;i<l;i++)
    {
        if(max<arr[i])
        max=arr[i];
        if(min>arr[i])
        min=arr[i];
    }
    printf("the range is=%d",max-min);
    free(arr);
    return 0;
}