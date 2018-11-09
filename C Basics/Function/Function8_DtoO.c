#include <stdio.h>
#include <math.h>

int DtoO(int n)
{
  int O =0, i=1;
  while (n!=0)
  {
    O = O+(n%8)*i;
    n = n/8;
    i = i*10;
  }
  return O;
}

int main()//greatest common divisior
{
  int n;
  printf("Enter a decimal number: ");
  scanf("%d",&n);
  printf("%d in decimal = %d in octal\n", n,DtoO(n));
  return 0;
}
