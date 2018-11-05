#include <stdio.h>

void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()//greatest common divisior
{
  int x=1,y=4,A,B,i=3,j=3,count = 0;
  int arr1[4]={0},arr2[4]={0};
  while (x!=0)
  {
    arr1[i--] = x%2;
    x = x/2;
  }
  while (y!=0)
  {
    arr2[j--] = y%2;
    y = y/2;
  }
  printArray(arr1,4);
  printArray(arr2,4);
  for(i=0;i<4;i++)
  {
    count = count+arr1[i]^arr2[i];
  }
  printf("the humming distance is %d.\n",count);
  return 0;
}
