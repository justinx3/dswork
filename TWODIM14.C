#include<stdio.h>
void main()
{
int a[10][10],i,j,r,c,s,flag=0;
clrscr();
printf("Enter the coloums and rows:");
scanf("%d %d",&r,&c);
for(i=0;i<r;i++)
	{
	for(j=0;j<c;j++)
		{
		printf("Enter number:");
		scanf("%d",&a[i][j]);
		}
	}
printf("the aarray is:\n");
for(i=0;i<r;i++)
	{
	for(j=0;j<c;j++)
		{
		printf(" %d",a[i][j]);
		}
	printf("\n");
	}
printf("\nEnter the elements to search:");
scanf("%d",&s);
for(i=0;i<r;i++)
	{
	for(j=0;j<c;j++)
		{
		if(a[i][j]==s)
			{
			printf("Element found at row %d and coloumn %d",i,j);
			flag=1;
			break;
			}
		}
	}
if(flag==0)
	{
	printf("Element not found");
	}
getch();
}
