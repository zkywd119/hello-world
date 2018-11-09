#include <stdio.h>

int main()
{
  double data;
  printf("Enter the number: ");
  scanf("%lf",&data);
  if (data>0.0)
    printf("%.2f is a positive number.\n", data);
  else if(data<0.0)
    printf("%.2f is a negative number.\n", data);
  else
    printf("%.2f is 0.\n", data);
  return 0;
}
