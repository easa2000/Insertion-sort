// Insertion sort 

#include<stdio.h>
void insertion_sort(int a[],int);
void main()
{
    int n, i, j, a[10], temp;
    printf("\n Enter the number of element in array: ");
    scanf("%d",&n);
    printf("\n Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    insertion_sort(a,n);
    

    printf("\n Sorted arrays: ");
    for(i=0;i<n;i++)
    {
        printf("\t %d",a[i]);
    }
}
void insertion_sort(int a[],int n)
{
    int i,j,temp;
    for(i=1;i<n;i++)
    {
        temp = a[i];
        j = i - 1;
        while(temp < a[j] && j>=0)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }
}

