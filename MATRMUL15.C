#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10],b[10][10],m[10][10],r1,c1,r2,c2,i,j,total1,total2,k;
clrscr();
printf("Enter the number of rows and coloums of array1: ");
scanf("%d%d",&r1,&c1);
printf("Enter the number of rows and coloums of array2: ");
scanf("%d%d",&r2,&c2);
if(r2==c1)
	{
	printf("Enter the elements of array1:\n");
	total1=r1*c1;
	printf("you can enter %d elements\n",total1);
	for(i=0;i<r1;i++)
		{
		for(j=0;j<c1;j++)
			{
			scanf("%d",&a[i][j]);
			}
		}
	printf("Enter the elements of array2:");
	total2=r2*c2;
	printf("you can enter %d elements\n",total2);
	for(i=0;i<r2;i++)
		{
		for(j=0;j<c2;j++)
			{
			scanf("%d",&b[i][j]);
			}
		}
	clrscr();
	printf("array1 is \n");
	for(i=0;i<r1;i++)
		{
		for(j=0;j<c1;j++)
			{
			printf(" %d",a[i][j]);
			}
		printf("\n");
		}
	printf("array2 is \n");
	for(i=0;i<r2;i++)
		{
		for(j=0;j<c2;j++)
			{
			printf(" %d",b[i][j]);
			}
		printf("\n");
		}

	printf("Matrix multiplied\n");
	for(i=0;i<r1;i++)
		{
		for(j=0;j<c2;j++)
			{
			m[i][j]=0;
			for(k=0;k<c1;k++)
				{
				m[i][j]=m[i][j]+a[i][k]*b[k][j];
				}
			}
		}
		for(i=0;i<r1;i++)
			{
			for(j=0;j<c2;j++)
				{
				printf(" %d",m[i][j]);
				}
			printf("\n");
			}
		}
		else
		{
		printf("Matrix cannot be multiplied");
		}
	getch();
}


