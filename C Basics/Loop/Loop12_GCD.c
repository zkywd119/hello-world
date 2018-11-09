#include <stdio.h>

int main()//greatest common divisior
{
  int n1,n2,i,divisor=0;
  printf("Enter two integers: ");
  scanf("%d %d",&n1,&n2);
  if (n1<=n2)
    i = n1;
  else
    i = n2;
  for(i; i>=0;i--)
  {
    if(n1%i==0 && n2%i==0)
    {
      divisor = i;
      break;
    }
  }
  printf("GCD is %d\n", divisor);
  return 0;
}
