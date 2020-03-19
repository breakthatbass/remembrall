#include <stdio.h>

int main()
{

  // initialize original array: numbers 1 - 10
  int arr[100] = { 0 };
  int i, x, remove, pos, n = 10;

  // initial array size of 10
  for (i = 0; i < 10; i++)
  {
    arr[i] = i + 1;
  }

  // print the array now
  printf("original array is: ");
  for (i = 0; i < 10; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");

  /*--------------------------------------*/
  // remove
  remove = 3;
  // find if element exists in array
  for (i = 0; i < 10; i++)
  {
    if (arr[i] == remove)
    {
      pos = i;
      break;
    }
  }

  if (pos != NULL)
  {
    // move all elements in array back one at that position on
    for (i = pos; i < n - 1; i++)
    {
      arr[i] = arr[i + 1];

      // below is to get rid of last element after all are moved
      if (i != n - 2)
      {
        continue;
      }
      else
      {
        arr[i + 1] = 0;
      }
    }

    // print the new array
    printf("\033[1m\033[31m"); // print in red bold
    printf("the new array is: ");
    printf("\033[0m");
    for (i =0; i <= n; i++)
    {
      printf("%d ", arr[i]);
    }
    printf("\n");

  }
  else
  {
    printf("element does not exist in array\n");
  }
}
