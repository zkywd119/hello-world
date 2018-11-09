#include <stdio.h>

int main()//lowest common multiple
{
  char operator;
  double first,second;
  printf("Enter an operator (+,-,*,/):\n");
  scanf("%c",&operator);
  printf("Enter two numbers:\n");
  scanf("%lf %lf", &first, &second);
  switch(operator)
  {
    case '+':
      printf("%.2lf + %.2lf = %.2lf", first, second, first+second);
      break;
    case '-':
      printf("%.2lf - %.2lf = %.2lf", first, second, first-second);
      break;
    case '*':
      printf("%.2lf * %.2lf = %.2lf", first, second, first*second);
      break;
    case '/':
      printf("%.2lf / %.2lf = %.2lf", first, second, first/second);
      break;
    default:
      printf("Error!\n");
  }
  return 0;
}
