#include <stdio.h>
int main()
{
  int num;

  printf("Input the numbers of elements in array\n");
  scanf("%d",&num);

  int arr[num];
  int flag[num];
  int i,result=0;
  printf("Input the elements in array\n");
  for(i =0; i<num; ++i)
  {
    scanf("%d",arr+i);
  }
  for(i =0; i<num; ++i)
  {
    result = result^arr[i];
  }

  printf("The single number is %d.\n",result);
  return 0;
}
