#include<stdio.h>
#include<stdlib.h>
int* reverse(int l,int arr[])
{
    int temp;
    for(int i=0;i<l/2;i++)
    {
        int temp=arr[i];
        arr[i]=arr[l-i-1];
        arr[l-i-1]=temp;
    } 
    return (arr);
}
int main()
{
    int* arr,length;
    int *ptr;
    printf("enter the length of the array");
    scanf("%d",&length);
    arr=(int*)calloc(length,sizeof(int));
    printf("enter the elements of the array:-\n");
    for(int i=0;i<length;i++)
    scanf("%d",&arr[i]);
    printf("the old array is :-\n");
    for(int i=0;i<length;i++)
    printf("%d",arr[i]);
    printf("\n");
    ptr=reverse(length,arr);
    printf("the reversed array is:-\n");
    for(int i=0;i<length;i++)
    printf("%d",ptr[i]);
    free(arr);
    free(ptr);
    return 0;
}