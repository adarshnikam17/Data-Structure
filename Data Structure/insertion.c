#include<stdio.h>

int main()
{
    int arr[100],i,x,p,n;
    
    printf("Enter the size of array: ");
    scanf("%d",&n);
    
    printf("Enter the element of array: ");
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    printf("Enter the position where do u want: ");
    scanf("%d",&p);
    
    printf("Enter the value in that position: ");
    scanf("%d",&x);
    
    for(i=n-1;i>=p;i--)
    arr[i+1]=arr[i];
    arr[p-1]=x;
    
    printf("After inserted final array is: ");
    for(i=0;i<n;i++)
    {
    printf("%d ",arr[i]);
    }
}  
