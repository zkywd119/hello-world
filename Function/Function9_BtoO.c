#include <stdio.h>
#include <math.h>

int BtoO(long long n)
{
  int O=0,D =0, i=0, remain;
  while (n!=0)
  {
    remain = n%10;
    n = n/10;
    D = D+remain*pow(2,i);
    i++;
  }
  i = 1;
  while (D!=0)
  {
    O = O+(D%8)*i;
    D = D/8;
    i = i*10;
  }
  return O;
}

int main()//greatest common divisior
{
  long long n;
  printf("Enter a binary number: ");
  scanf("%lld",&n);
  printf("%lld in binary = %d in decimal\n", n,BtoO(n));
  return 0;
}
