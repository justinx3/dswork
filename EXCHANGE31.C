#include<stdio.h>
void main()
{
int a[10],i,n,j,t;
clrscr();
printf("Enter the limit of the array:");
scanf("%d",&n);
printf("\nEnter the element of the array:");
for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
printf("\nThe array is :");
for(i=0;i<n;i++)
    {
    printf(" %d",a[i]);
    }
for(i=0;i<n-1;i++)
    {
	for(j=i+1;j<n;j++)
	{
	if(a[i]>a[j])
		{
		t=a[i];
		a[i]=a[j];
		a[j]=t;
		}
	}
    }
printf("\nsorted array:");
for(i=0;i<n;i++)
	{
	printf(" %d", a[i]);
	}
getch();
}
