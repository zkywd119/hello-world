#include <stdio.h>

unsigned long long factorial(int data)
{
  if (data>=1)
    return data*factorial(data-1);
  else
    return 1;
}
int main()
{
  int data;
  printf("Enter positive integer: ");
  scanf("%d",&data);
  printf("Factorial is %llu.\n", factorial(data));
  return 0;
}
