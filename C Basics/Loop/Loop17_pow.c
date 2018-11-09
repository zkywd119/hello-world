#include <stdio.h>
#include <math.h>

int main()//lowest common multiple
{
  double base, exponent, result;
  printf("Enter base: \n");
  scanf("%lf",&base);
  printf("Enter exponent: \n");
  scanf("%lf",&exponent);
  result = pow(base,exponent);
  printf("The result is %.2lf\n", result);
  return 0;
}
