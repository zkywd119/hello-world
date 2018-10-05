#include <stdio.h>

int div(int n1, int n2)
{
  if (n2!=0)
    return div(n2,n1%n2);
  else
    return n1;
}

int main()//greatest common divisior
{
  int n1,n2,i;
  printf("Enter two integers: ");
  scanf("%d %d",&n1,&n2);

  printf("GCD is %d\n", div(n1,n2));
  return 0;
}
