#include <stdio.h>

int check(int data)
{
  int flag = 1;
  for(int i=2;i<=data/2;i++)
  {
    if (data%i==0)
    {
      flag = 0;
      return flag;
    }
  }
  return flag;
}
int main()//lowest common multiple
{
  int data, flag=0;
  printf("Enter a >1 integer: \n");
  scanf("%d",&data);
  for(int i=2;i<=data/2;i++)
  {
    if (check(i))
    {
      if (check(data-i))
        {
          printf("%d = %d + %d\n", data,i,data-i);
          flag = 1;
        }
      }
  }
  if (flag==0)
    printf("%d can not be writtern as sum of 2 primes.\n", data);
  return 0;
}
