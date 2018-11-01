#include <stdio.h>
#include <stdlib.h>
int main()
{
  int i,j,target,size,flag = 0;
  int arr[] = {2,7,11,15};
  size = sizeof(arr)/sizeof(arr[0]);
  printf("Input an integer:\n");
  scanf("%d",&target);
  for(i=0;i<size;++i)
  {
    for(j=i+1;j<size;++j)
    {
      if(arr[i]+arr[j]==target)
        {
          printf("the indexes are %d and %d.\n",i,j);
          flag =1;
          break;
        }
    }
    if(flag==1) break;
  }
  printf("the i and j are %d and %d.\n",i,j);

  return 0;
}
