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
  int num, count =0,i;
  printf("Enter a >1 integer: \n");
  scanf("%d",&num);
  for(i=0;i<num;++i)
  {
    if (check(i))
      count++;
  }
  printf("The nummber of prime is %d.\n",count);
  return 0;
}
