#include<stdio.h>
void main()
{
int a[5],i,j,temp,n,min;
clrscr();
printf("Enter the number of elements: ");
scanf("%d",&n);
printf("Enter %d numbers: ",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Unsorted array: ");
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
for(i=0;i<n-1;i++)
{
min=i;
for(j=i+1;j<n;j++)
{
if(a[j]<a[min])
min=j;
}
if(min!=i)
{
temp=a[min];
a[min]=a[i];
a[i]=temp;
}}
printf("\nSorted array: ");
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
getch();
}



