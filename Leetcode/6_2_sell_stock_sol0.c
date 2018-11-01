#include <stdio.h>
#include <stdlib.h>
int main()
{
  int i,j,max = 0,size,flag = 0;
  int arr[100];
  printf("Enter the numbers of elements: \n");
  scanf("%d",&size);

  for(i=0;i<size;i++)
  {
    printf("Enter number %d:", i+1);
    scanf("%d",arr+i);
  }
  for(i=0;i<size;++i)
  {
    for(j=i+1;j<size;++j)
    {
      if(arr[j]-arr[i]>max)
        {
          max = arr[j]-arr[i];
        }
    }
  }
  printf("the max income is %d.\n",max);

  return 0;
}
