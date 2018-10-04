#include <stdio.h>

int main()//lowest common multiple
{
  int count=0;
  long long data;
  printf("Enter an integer: \n");
  scanf("%lld",&data);
  while (data!=0)
  {
    data=data/10;
    count++;
  }
  printf("the digits are %d\n", count);
  return 0;
}
