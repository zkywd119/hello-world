#include <stdio.h>

int main()//lowest common multiple
{
  int i, space, row, k;
  printf("Enter number of rows:\n");
  scanf("%d",&row);
  for(i = 1; i<=row; i++)
  {
    for(space=1; space<=row-i;space++)
    {
      printf("  ");
    }
    k=0;
    while(k!=2*i-1)
    {
      printf("* ");
      k++;
    }
    printf("\n");
  }
  return 0;
}
