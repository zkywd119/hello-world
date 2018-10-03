#include <stdio.h>

int add(int a, int b)
{
  int sum;
  sum = a+b;
  return sum;
}

int main()
{
  int data1, data2;
  printf("Enter two integers: ");
  scanf("%d", &data1);
  scanf("%d", &data2);
  printf("%d + %d = %d\n",data1, data2,add(data1,data2));

  return 0;
}
