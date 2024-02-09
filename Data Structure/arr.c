#include<stdio.h>

int main()
{
    int arr[100],i,size,smallest;
    printf("Enter the size of array:");
    scanf("%d",&size);

    smallest=arr[0];

    for( i=1; i<size; i++)
    {
        if(smallest>arr[i])
        smallest=arr[i];
    }

    printf("Smallest element of array is %d",smallest);

    return 0;


}