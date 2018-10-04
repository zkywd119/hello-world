#include <stdio.h>


int main()//lowest common multiple
{
  int count=0;
  long long data,reverse=0,remain;
  printf("Enter an integer: \n");
  scanf("%lld",&data);
  while (data!=0)
  {
    remain=data%10;
    reverse = reverse*10+remain;
    data = data/10;
  }
  printf("the digits are %lld\n", reverse);
  return 0;
}
