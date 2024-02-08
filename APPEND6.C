#include<stdio.h>
void main()
{
int a[10],b[10],n,m,i,j;
clrscr();
printf("Enter limit of a[1]:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter Number:");
scanf("%d",&a[i]);
}
printf("\nEnter limit of array [2]:");
scanf("%d",&m);
for(i=0;i<m;i++)
{
printf("Enter number:");
scanf("%d",&b[i]);
}
printf("\nArray 1:");
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
printf("\nArray 2:");
for(i=0;i<m;i++)
{
printf("%d ",b[i]);
}
for(j=n,i=0;i<m;i++,j++)
{
a[j]=b[i];
}
printf("\nAppent array:");
for(i=0;i<n+m;i++)
{
printf("%d ",a[i]);
}
getch();
}