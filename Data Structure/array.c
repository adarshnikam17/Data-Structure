#include<stdio.h>

int main()
{
    int arr[100],n,i,sum=0;
    printf("Enter a array size:");
    scanf("%d",&n);
    printf("Enter elements of an array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    printf("Addition of array is:%d\n",sum);
    return 0;
}