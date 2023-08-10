#include <stdio.h>


int binarySearchForPosition(int arr[], int key, int size, int *comparison)
{
  int left = 0;
  int right = size -1;
  int result = -1;

  while(left <= right)
    {
      int mid = (left + (right - left) / 2);

      if(arr[mid] == key)
      {
        result = mid;
      }
      if(arr[mid] < key)
      {
        left = mid + 1;
      }
      else 
      {
        right = mid - 1;
      }

      *(comparison)++;
    }

      return result;
}


int main()
{
  int size, key, comparison = 0;
  printf("Enter Size of Array: ");
  scanf("%d", &size);

  int arr[size];
  printf("Enter elements of Array: ");
  for(int i = 0; i<size; i++)
  {
    scanf("%d", &arr[i]);
  }

  printf("Enter Key for finding Position: ");
  scanf("%d", &key);

  int position = binarySearchForPosition(arr, key, size, &comparison);

  if(position != -1)
  {
    printf("%d at index postion %d\n", key, position);
    printf("Total Comparisions: %d\n", comparison);
  }
  else{
    printf("%d does not exist in the array\n", key);
  }
  
  return 0;
}
