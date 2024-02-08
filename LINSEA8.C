#include<stdio.h>
void main()
{
int a[10],i,n,item;
clrscr();
printf("Enter the limit of the array:");
scanf("%d",&n);
printf("Enter the elements:");
for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
printf("\nEnter number to search:");
scanf("%d",&item);
for(i=0;i<n;i++)
    {
    if(a[i]==item)
	{
	 printf("\n%d found at %d", item, i);
	break;
	}
    }
    if (a[i]!=item)
	{
	printf("\n%d not found at %d ", item, i);
	}
	getch();

   }
