#include<stdio.h>
int main()
{
    int arr[5],leangth=5,i,j,temp,n,min;
    clrscr();
    printf("Enter the number of elemenmts:");
    scanf("%d",&n);
    printf("\nEnter %d numbers:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=jtemp=arr[min];
                arr[min]=arr[i];
                arr[i]=temp;
            }
        }
    }
    printf("sorted array is:");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    getch();
}