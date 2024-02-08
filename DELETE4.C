//insertion at position
#include<stdio.h>
void main()
int a[10],n,i,position,item;
clrscr();
printf("Enter the limit of the array");
scanf("%d",&n);
printf("Enter the element of the array");
for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
printf("Array is :");
for(i=0;i<n;i++)
	{
	printf(" %d",a[i]);
	}
printf("Enter the position and item to be inserted:");
scanf("%d%d",&position,&item);
for(i=n-1;i>=position-1;i--)
	{
	a[i+1]=a[i]
	}
a[poition-1]=item;
n++;
printf("new array is :");
for(i=0;i<n;i++)
	{
	printf("%d",a[i]);
	}
getch();
}

