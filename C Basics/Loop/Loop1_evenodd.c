#include <stdio.h>

void evenodd(int data)
{
  if (data%2==0)
  {
    printf("it is an even number.\n");
    return;
  }
  else
  {
    printf("it is an odd number.\n");
    return;
  }
}
int main()
{
  int data;
  printf("Enter an integer: ");
  scanf("%d",&data);
  evenodd(data);
  return 0;
}
