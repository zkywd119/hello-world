#include <stdio.h>

int check(int data)
{
  int flag = 0;
  for(int i=2;i<=data/2;i++)
  {
    if (data%i==0)
    {
      flag = 1;
      return flag;
    }
  }
  return flag;
}
int main()//lowest common multiple
{
  int data;
  printf("Enter a >1 integer: \n");
  scanf("%d",&data);

  if (check(data))
    printf("%d is not a prime\n", data);
  else
    printf("%d is a prime\n",data);
  return 0;
}
