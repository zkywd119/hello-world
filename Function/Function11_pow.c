#include <stdio.h>

int power(int base, int exponent)
{
  if (exponent!=0)
    return (base*power(base,exponent-1));
  else
    return 1;
}

int main()//lowest common multiple
{
  int base, exponent, result;
  printf("Enter base: \n");
  scanf("%d",&base);
  printf("Enter exponent: \n");
  scanf("%d",&exponent);
  result = power(base,exponent);
  printf("The result is %d\n", result);
  return 0;
}
