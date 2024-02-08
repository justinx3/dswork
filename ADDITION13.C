#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10][10],b[10][10],s[10][10],r1,c1,r2,c2,i,j;
    clrscr();
    printf("Enter the number of rows and coloums for array1:");
    scanf("%d %d",&r1,&c1);
    printf("Enter the number of rows and coloums for array2:");
    scanf("%d %d",&r2,&c2);
    if(r1!=r2&&c1!=c2)
	{
	    printf("matrix cannot be multriplied");
	}
    else
	{
	    printf("Enter element for array1:\n");
	    for(i=0;i<r1;i++)
		{
		    for(j=0;j<c1;j++)
			{
			    printf("Enter element:");
			    scanf("%d",&a[i][j]);
			}
		}
	   printf("array 1 is:\n");
	   for(i=0;i<r1;i++)
		{
		    for(j=0;j<c1;j++)
			{
			    printf(" %d",a[i][j]);
			}
			printf("\n");
		}
	    printf("Enter element for array2:\n");
	    for(i=0;i<r2;i++)
		{
		    for(j=0;j<c2;j++)
			{
			    printf("Enter element:");
			    scanf("%d",&b[i][j]);
			}
		}
	   printf("array 2 is:\n");
	   for(i=0;i<r2;i++)
		{
		    for(j=0;j<c2;j++)
			{
			    printf(" %d",b[i][j]);
			}
			printf("\n");
		}
	     for(i=0;i<r1;i++)
		{
		    for(j=0;j<c2;j++)
			{
			    s[i][j]=a[i][j]+b[i][j];
			}
		}
	    printf("\nSum of matrices are:\n");
	    for(i=0;i<r1;i++)
		{
		    for(j=0;j<c2;j++)
			{
			   printf(" %d",s[i][j]);
			}
			printf("\n");
		}
	}
    getch();
}
