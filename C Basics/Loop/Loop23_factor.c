#include <stdio.h>

int main()//lowest common multiple
{
  int data;
  printf("Enter an integers: \n");
  scanf("%d",&data);
  for (int i=1; i<=data;i++)
  {
    if (data%i==0)
    printf("%d \n", i);
  }
  return 0;
}
