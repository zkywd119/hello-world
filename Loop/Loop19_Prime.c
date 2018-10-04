#include <stdio.h>


int main()//lowest common multiple
{
  int i=2,data,flag=0;
  printf("Enter a >1 integer: \n");
  scanf("%d",&data);
  for(i;i<=data/2;i++)
  {
    if (data%i==0)
    {
      flag = 1;
      break;
    }
  }
  if (flag==1)
    printf("%d is not a prime\n", data);
  else
    printf("%d is a prime\n",data);
  return 0;
}
