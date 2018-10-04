#include <stdio.h>

unsigned long long factorial(int data)
{
  unsigned long long product = 1;
  for (int i =1; i<=data;i++)
    product *=i;
  return product;
}
int main()
{
  int data;
  printf("Enter positive integer: ");
  scanf("%d",&data);
  printf("Factorial is %llu.\n", factorial(data));
  return 0;
}
