#include<stdio.h>
void main()
{
int a[10][10],b[10][10],i,j,r,c,count=0,x=1;
clrscr();
printf("Enter the coloums and rows:");
scanf("%d %d",&r,&c);
printf("Enter elements for sparse matrix:\n");
for(i=0;i<r;i++)
	{
	for(j=0;j<c;j++)
		{
		scanf("%d",&a[i][j]);
		if(a[i][j]!=0)
			{
			count++;
			}

		}
	}
printf("the sparse matrix  is:\n");
for(i=0;i<r;i++)
	{
	for(j=0;j<c;j++)
		{
		printf(" %d",a[i][j]);
		}
	printf("\n");
	}
b[0][0]=r;
b[0][1]=c;
b[0][2]=count;
for(i=0;i<r;i++)
	{
	for(j=0;j<c;j++)
		{
		if(a[i][j]!=0)
			{
			b[x][0]=i;
			b[x][1]=j;
			b[x][2]=a[i][j];
			x++;
			}
		}
	}
printf("Triplet form is:\n");
for(i=0;i<x;i++)
	{
	for(j=0;j<3;j++)
		{
		printf(" %d",b[i][j]);
		}
	printf("\n");
	}
getch();
}

