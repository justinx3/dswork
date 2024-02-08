#include<stdio.h>
void main()
{
int a[10][10],i,j,r,c;
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
printf("\nTranspose is \n");
for(i=0;i<c;i++)
	{
	for(j=0;j<c;j++)
		{
		printf(" %d",a[j][i]);
		}
	printf("\n");
	}
getch();
}


