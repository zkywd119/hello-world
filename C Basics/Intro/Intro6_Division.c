#include <stdio.h>

int main()
{
  int numerator, denominator, quotient, remain;
  printf("Enter numerator: ");
  scanf("%d", &numerator);
  printf("Enter denominator: ");
  scanf("%d", &denominator);
  remain = numerator % denominator;
  quotient = numerator/denominator;
  printf("quotient is %d and remain is %d\n",quotient,remain);

  return 0;
}
