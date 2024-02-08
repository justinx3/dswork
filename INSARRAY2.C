//insert an element at the beginning of an array
#include<stdio.h>
void main()
{
int a[10],n,i,item;
clrscr();
printf("Enter the limit of an array:");
scanf("%d",&n);
printf("Enter the number:");
for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
printf("Elements are:");
for(i=0;i<n;i++)
	{
	printf("\t %d",a[i]);
	}
printf("\n Element to be added:");
scanf("%d",&item);
for(i=n-1;i>=0;i--)
	{
	a[i+1]=a[i];
	}
a[0]=item;
n=n+1;
for(i=0;i<n;i++)
	{
	printf(" %d",a[i]);
	}
getch();
}

