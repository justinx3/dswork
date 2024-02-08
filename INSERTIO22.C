#include<stdio.h>
void main()
{
int a[5],i,j,temp,n,key;
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
for(i=1;i<n;i++)
{
key=a[i];
j=i-1;
while(key<a[j]&&j>=0)
{
a[j+1]=a[j];
--j;
}
a[j+1]=key;
}
printf("Sorted array: ");
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
getch();
}
