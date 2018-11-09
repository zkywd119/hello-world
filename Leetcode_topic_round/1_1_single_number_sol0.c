#include <stdio.h>
int main()
{
  int num;

  printf("Input the numbers of elements in array\n");
  scanf("%d",&num);

  int arr[num];
  int flag[num];
  int i,j;
  printf("Input the elements in array\n");
  for(i =0; i<num; ++i)
  {
    scanf("%d",arr+i);
  }
  for(i =0; i<num; ++i)
  {
    flag[i] = 0;
    for(j = 0; j<num;++j)
    {
      if(arr[j] ==arr[i])
        flag[i]++;
    }
  }
  for(i=0;i<num;++i)
  {
    if(flag[i]==1)
      break;
  }

  printf("The single number is %d.\n",arr[i]);
  return 0;
}
