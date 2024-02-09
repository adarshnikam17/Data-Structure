#include<stdio.h>

int main()
{
    int a[100],loc,item,n,i;
    printf("Enter the size:");
    scanf("%d",&n);

    printf("Enter the item to be search: ");
    scanf("%d",&item);

    printf("Enter the elements:");
    for(i=1; i<=n; i++)
        scanf("%d",&a[i]);
        loc=1;

    while(a[loc]!= item && loc<=n)
    loc++;

    if(loc==n+1)
      {
        printf("search is unsuccessfull.");
      }
      else
      {
        printf("%d is present at location %d",item,loc);
      }  
      return 0;
}