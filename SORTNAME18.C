#include<stdio.h>
#include<string.h>
void main()
{
char a[20],temp[20];
int x,n,i,j;
clrscr();
printf("Enter the number of names: ");
scanf("%d",&n);
printf("Enter the names: ");
for(i=0;i<n;i++)
{
scanf("%s",&a[i]);
}
printf("The unsorted names are: ");
for(i=0;i<n;i++)
{
printf("%s ",a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
x=strcmp(a[i],a[j]);
if(x>0)
{
strcpy(temp,a[i]);
strcpy(a[i],a[j]);
strcpy(a[j],temp);
}}}
printf("\nThe sorted names: ");
for(i=0;i<n;i++)
{
printf("%s ",a[i]);
}
getch();
}