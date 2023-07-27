#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int main()
{
    int n, i, j, temp, count=0, max=0, max_element;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements of the array: ");
    
    
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    
    for(i=0; i<n; i++)
    {
        count=0;
        for(j=i+1; j<n; j++)
        {
            if(arr[j]==arr[i])
            {
                count++;
            }
        }
        if(count>max)
        {
            max=count;
            max_element=arr[i];
        }
    }
    
    printf("The most repeating element is: %d\n", max_element);
    
    return 0;
}
