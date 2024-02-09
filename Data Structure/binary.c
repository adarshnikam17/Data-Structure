#include<stdio.h>

int main()
{
int i,low,high,mid,n,key,array[100];
printf("\n Enter the number of elements:");
scanf("%d",&n);
printf("\n Enter %d elements:",n);

for(i=0;i<n;i++)
scanf("%d",&array[i]);
printf("\n Enter value to find n:");
scanf("%d",&key);
low=0;
high=n-1;
mid=(low+high/2);

while(low<=high)
{
if(array[mid]<key)
low=mid+1;
else if(array[mid]==key)
{
printf("\n %d found at location %d ",key,mid+1);
break;
}
else
high=mid-1;
mid=(low+high)/2;
}
if(low>high)
{
printf("Not found ! %d isnt present in the list n",key);
}
return 0;
}
