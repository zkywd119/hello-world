#include <stdio.h>
#include <math.h>

int main()
{
  double a,b,c,delta,root1,root2,real,imag;
  printf("Enter coefficients a, b and c: ");
  scanf("%lf %lf %lf",&a, &b, &c);
  delta = b*b-4*a*c;
  if (delta>=0)
  {
    root1 = (-b+sqrt(delta))/(2*a);
    root2 = (-b-sqrt(delta))/(2*a);
    printf("root1 = %.2f and root2 = %.2f\n", root1,root2);
  }
  else
  {
    real = -b/(2*a);
    imag = sqrt(-delta)/(2*a);
    printf("root1 = %.2f+%.2fi and root2 = %.2f-%.2fi\n", real,imag,real,imag);
  }
  return 0;
}
