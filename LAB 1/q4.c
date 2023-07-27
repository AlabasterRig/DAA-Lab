#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

void exchange(int *p, int *q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}

void rotate_right(int *p1, int p2)
{
    int i;
    for(i=0; i<p2; i++)
    {
        exchange(p1, p1+1);
        p1++;
    }
}

int main()
{
    int n, i, j, temp, p2;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    
    int arr[n];
    printf("Enter the elements of the array: ");
    
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the number of elements to be rotated: ");
    scanf("%d", &p2);
    
    rotate_right(arr, p2);
    
    printf("The rotated array is: ");
    
    for(i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    printf("\n");
    
    return 0;
}
