#include <stdio.h>

int first(int* arr, int size)
{
  int low=0,high=size-1,mid;
  while(high-low>1)
  {
    mid = low+(high-low)/2;
    if(arr[mid]==1)
      high = mid;
    else low = mid;
  }
  return high;
}
int main()
{
    int arr[] = {0,0,0,1,1};
    int size;
    size = sizeof(arr)/sizeof(arr[0]);

    printf("the first bad is %d\n",first(arr,size)+1);
    return 0;
}
