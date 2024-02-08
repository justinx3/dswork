#include<stdio.h>
int main()
{
    int arr[5],leangth=5,i,j,temp,n,key;
    clrscr();
    printf("Enter the number of elemenmts:");
    scanf("%d",&n);
    printf("\nEnter %d numbers:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nthe unsorted elements are:");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
        key=arr[i];
    
    for(j=i-1;j>=n && arr[j]>key;j--)
        {
            arr[j+1]=arr[j];
        }
        arr[j+1]=key;
    }
    printf("sorted array is:")
    for(i=0;i<n;i++)
        {
            printf("%d",arr[i])
        }
    getch();
}