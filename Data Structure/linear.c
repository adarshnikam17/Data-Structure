#include<stdio.h>
int main()
{
int a[5],n,loc,item,i;
printf("\n Enter number of elements:");
scanf("%d",&n);

printf("\n Enter item to be search:");
scanf("%d",&item);

printf("\n Enter the elements:");
for(i=1;i<=n;i++)
scanf("%d",&a[i]);
loc=1;

while(a[loc]!=item && loc<=n)
loc++;

if(loc==n+1)
{
printf("\n search is unsuccesful");
}
else
{
printf("\n %d is present at location %d ",item,loc);
}
return 0;
}

