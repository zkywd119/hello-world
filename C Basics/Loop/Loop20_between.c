#include <stdio.h>


int main()//lowest common multiple
{
  int i=2,low,high,flag;
  printf("Enter two integers: \n");
  scanf("%d %d",&low, &high);
  while(low<high)
  {
    flag = 0;
    for(i=2;i<=low/2;i++)
    {
      if (low%i==0)
      {
        flag = 1;
        break;
      }
    }
    if (flag==0)
      printf("%d ",low);
    low++;
  }

  return 0;
}
