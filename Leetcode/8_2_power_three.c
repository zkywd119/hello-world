#include <stdio.h>

int divide3(int n)
{
  if(n==0 || n%3!=0)
    return 1;
  else
    while(n%3==0)
    {
      n = n/3;
    }
  if(n%3!=1)
    return 1;
  else
    return 0;
}

int main()
{
  int num;
  printf("Input an integer:\n");
  scanf("%d",&num);
  if(divide3(num))
    printf("%d is not power of 3.\n",num);
  else
    printf("%d is power of 3.\n",num);
  return 0;
}
