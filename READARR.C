#include<stdio.h>
void main()
{
int a[10],n,i;
clrscr();
printf("Enter the limit of the array:");
scanf("%d",&n);
printf("Enter the number:");
for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
printf("Elements are:");
for(i=0;i<n;i++)
	{
	printf("\n %d",a[i]);
	}
getch();
}
