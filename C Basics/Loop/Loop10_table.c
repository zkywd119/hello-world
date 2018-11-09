#include <stdio.h>


int main()
{
  int data1, data2,range;
  printf("Enter an integer: ");
  scanf("%d",&data1);
  printf("Enter a range: ");
  scanf("%d",&range);
  for(data2=1;data2<=range;data2++)
  printf("%d * %d = %d\n",data1, data2,data1*data2);
  return 0;
}
