#include <stdio.h>

int naturesum(int data)
{
  if(data!=0)
    return data+naturesum(data-1);
  else
    return 0;  
}
int main()
{
  int data;
  printf("Enter positive integer: ");
  scanf("%d",&data);
  printf("Nature sum is %d.\n", naturesum(data));
  return 0;
}
