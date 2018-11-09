#include <stdio.h>

int naturesum(int data)
{
  int sum = 0;
  for (int i =1; i<=data;i++)
    sum +=i;
  return sum;
}
int main()
{
  int data;
  printf("Enter positive integer: ");
  scanf("%d",&data);
  printf("Nature sum is %d.\n", naturesum(data));
  return 0;
}
