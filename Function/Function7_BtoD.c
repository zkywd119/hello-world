#include <stdio.h>
#include <math.h>

int BtoD(long long n)
{
  int D =0, i=0, remain;
  while (n!=0)
  {
    remain = n%10;
    n = n/10;
    D = D+remain*pow(2,i);
    i++;
  }
  return D;
}

int main()//greatest common divisior
{
  long long n;
  printf("Enter a binary number: ");
  scanf("%lld",&n);
  printf("%lld in binary = %d in decimal\n", n,BtoD(n));
  return 0;
}
