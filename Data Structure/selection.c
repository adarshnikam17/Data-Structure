#include<stdio.h>

int main()
{
    int arr[10]={7,6,12,16,20,9,30,43,15};
    int n=10,pos,swap,i,j;

    for(i=0; i<n-1; i++)
    {
       pos=i;
       for(j=i+1; j<n; j++)
       {
        if(arr[pos]>arr[j])
        pos=j;
       }
       if(pos!=j)
       {
        swap=arr[i];
        arr[i]=arr[pos];
        arr[pos]=swap;
       }
    }
    for(pos=1;pos<n;pos++)
    {
        printf("%d ",arr[pos]);
    }
    return 0;
}