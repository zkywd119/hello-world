
#include <stdio.h>

int DtoB(int n)
{
  unsigned long B = 0;
  int count = 0;
  int i = 1;
  while (n!=0)
  {
    B = B+(n%2)*i;
    if(n%2==1)
      count++;
    n = n/2;
    i = i*10;

  }
  return count;
}

int main()//greatest common divisior
{
  int n;
  printf("Enter a decimal number: ");
  scanf("%d",&n);
  printf("The number of bits is %d\n",DtoB(n));
  return 0;
}
