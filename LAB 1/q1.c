#include <stdio.h>

int main()
{
int n;
printf("Enter the Size of the array: ");
scanf("%d", &n);

int arr[n];

printf("Enter Values of the array: ");

for(int i = 0; i<n; i++)
{
	scanf("%d", &arr[i]);
}

int smallest = arr[0];
int second_smallest = smallest;

int largest = arr[0];
int second_largest = largest;

for(int i = 1; i<n; i++)
{
	if(arr[i] < smallest)
	{
		second_smallest = smallest;
		smallest = arr[i];
	}
	else if(arr[i] > largest)
	{
		second_largest = largest;
		largest = arr[i];
	}
	else if(arr[i] > smallest && arr[i] < second_smallest)
	{
		second_smallest = arr[i];
	}
	else if(arr[i] < largest && arr[i] > second_largest)
	{
		second_largest = arr[i];
	}
}

printf("Second Largest Number is: %d\n", second_largest);
printf("Second Smallest Number is: %d\n", second_smallest);




return 0;
}
