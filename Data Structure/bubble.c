#include<stdio.h>

void main()
{
int arr[100],n,i,d,swap;
printf("Enter the number of elements: ");
scanf("%d",&n);
printf("Enter %d integer \n",n);
 for(i=0;i<n;i++){
  scanf("%d",&arr[i]);
 }
 for(i=0;i<n-1;i++)
 {
 for(d=0;d<n-i-1;d++)
 {
 if(arr[d]>arr[d+1])
 {
 swap=arr[d];
 arr[d]=arr[d+1];
 arr[d+1]=swap;
 }
 }
 }
printf("Sorted array in Asending order\n");
for(i=0;i<n;i++)
printf("%d\n",arr[i]);
}

