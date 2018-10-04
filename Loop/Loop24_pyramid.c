#include <stdio.h>

int main()//lowest common multiple
{
  int i,j,row;
  printf("Enter an integers: \n");
  scanf("%d",&row);
  for (i=1; i<=row;i++)
  {
    for (j = 1;j<=i;j++)
    {
      printf("%d ",j);
    }
    printf("\n");
  }
  return 0;
}
